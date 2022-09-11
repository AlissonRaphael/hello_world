function sum (param1: number, param2: number): number {
  return param1+param2
}

function sumAll (params: number[]): number {
  return params.reduce((total, value) => total+value, 0)
}

function subtract (param1: number, param2: number): void {
  console.log(param1-param2)
}

function multiply (param1: number, param2: any): any | void {
  const paramType = typeof param2

  if (paramType === 'string')
    return [...new Array(param1)].reduce(total => total += param2, '')

  if (paramType === 'number')
    return param1 * param2
}

console.log(sum(1,7))
console.log(sumAll([6,2,1,1]))
subtract(3,1)
console.log(multiply(3, 2))
console.log(multiply(5, 'Hello! '))

let printLine: (value: string) => void
printLine = (value) => console.log(value)
printLine('Typescript')
