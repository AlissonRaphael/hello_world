interface PrintNumbers {
  (numbers: number[], msg: string): void
}

const printOdds: PrintNumbers = (numbers: number[], msg: string): void => {
  const odds = numbers.filter(number => number % 2 !== 0)
  console.log(`${msg}: ${odds}`)
}

const printPairs: PrintNumbers = (numbers: number[], msg: string): void => {
  const pairs = numbers.filter(number => number % 2 === 0)
  console.log(`${msg}: ${pairs}`)
}

printOdds([11,40,22,9,7,18,3,17,39], 'Esses são os números impáres')
printPairs([11,40,22,9,7,18,3,17,39], 'Veja os números pares')
