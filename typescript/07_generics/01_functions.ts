function echo <T> (param: T): T {
  return param
}

console.log(echo('Alisson').length)
echo({
  name: 'Alisson',
  active: true,
  status: function () {console.log(`${this.name}: ${this.active}`)}
}).status()
