abstract class SomeOperation <C> {
  constructor (public param1: C, public param2: C) {}

  abstract execute(): C
}

class SomeNumOperation extends SomeOperation <number> {
  execute(): number {
    return this.param1+this.param2
  }
}

class ConcatOperation extends SomeOperation <string> {
  execute(): string {
    return `${this.param1} ${this.param2}`
  }
}

const some = new SomeNumOperation(30,20).execute()
const fullName = new ConcatOperation('Alisson', 'Oliveira').execute()

console.log(some)
console.log(fullName)
