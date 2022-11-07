const signs: Array<string> = ['1.Aries', '2.Taurus', '3.Germini']
signs.push('4.Cancer')
// signs.push(5) -> error TS2345: Argument of type 'number' is not assignable to parameter of type 'string'
signs.push('5.Lion')

const signDates: Array<{ start: string, end: string }> = []
signDates.push({ start: 'March 21', end: 'April 19' })
signDates.push({ start: 'April 20', end: 'May 20' })

function print <I>(content: I): I {
  console.log(content)
  return content
}

print(signs)
const startDate: string = print(signDates)[0].start
console.log(startDate)
