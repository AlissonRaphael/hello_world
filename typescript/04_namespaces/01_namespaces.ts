namespace Areas {
  const PI = 3.14

  export function Circle (r: number): number {
    return PI * Math.pow(r, 2)
  }

  export function Square (width: number, height: number): number {
    return width*height
  }
}

console.log(Areas.Circle(2))
console.log(Areas.Square(2,2))
