namespace Calculate {
  export namespace Areas {
    const PI = 3.14

    export function Circle (r: number): number {
      return PI * Math.pow(r, 2)
    }

    export function Square (l: number): number {
      return Math.pow(l, 2)
    }
  }

  export namespace Perimeters {
    const PI = 3.14

    export function Circle (r: number): number {
      return 2*PI*r
    }

    export function Square (l: number): number {
      return 4*l
    }
  }
}

console.log(Calculate.Areas.Circle(2))
console.log(Calculate.Areas.Square(2))
console.log(Calculate.Perimeters.Circle(2))
console.log(Calculate.Perimeters.Square(2))
