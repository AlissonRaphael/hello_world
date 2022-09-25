class Toy {
  public colorName: string = ''
  constructor(public name: string) {}

  set color(color: string) {
    this.colorName = color
  }

  get color () {
    return `The color of the ${this.name} is ${this.colorName}`
  }

  static (price: number, tax: number): number {
    return price+price*tax
  }
}

const car = new Toy('car')
car.color = 'black'
console.log(car.color)
console.log(car.static(19, 0.1))
