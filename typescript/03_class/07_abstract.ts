abstract class Geometry {
  abstract area (): number
  abstract perimeter (): number

  calculate (): void {
    console.log(`The figure has perimeter ${this.perimeter()}m and area ${this.area()}m2`)
  }
}

// const circle = new Geometry() - error TS2511: Cannot create an instance of an abstract class.

class Square extends Geometry {
  constructor (public width: number) {
    super()
  }

  area (): number {
    return this.width*this.width
  }

  perimeter (): number {
    return this.width*4
  }
}

const square = new Square(5)
square.calculate()

class Circle extends Geometry {
  constructor (public r: number) {
    super()
  }

  area (): number {
    return 3.14*Math.pow(this.r, 2)
  }

  perimeter (): number {
    return 2*3.14*this.r
  }
}

const circle = new Circle(5)
circle.calculate()
