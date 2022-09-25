class Fruit {
  public colorName: string = ''
  constructor(public name: string) {}

  set color(color: string) {
    this.colorName = color
  }

  get color () {
    return `The color of the ${this.name} is ${this.colorName}`
  }
}

const apple = new Fruit('apple')
apple.color = 'red'
console.log(apple.color)
