function echo <T> (param: T): T {
  return param
}

console.log(echo('Alisson').length)
echo({
  name: 'Alisson',
  active: true,
  status: function () {console.log(`${this.name}: ${this.active}`)}
}).status()

function nextPage <T> (param: T): T {
  console.log(param)
  return param
}

const printPage: <R> (param: R) => R = nextPage
const newPage = printPage(25)+5
printPage(newPage)
