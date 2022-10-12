interface Array<T> {
  print5(): void
}

Array.prototype.print5 = function (): void {
  console.log(this.filter((_, i) => i < 5))
}

const arr = [5,10,4,1,1,50,1,4,11]
arr.print5()


interface Object {
  printLine(): void
}

Object.prototype.printLine = function (): void {
  console.log(this.toString())
}

const obj = 'Alisson'
obj.printLine()
