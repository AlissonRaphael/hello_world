class Color {
  private static instance: Color = new Color

  private constructor () {}

  static getInstance (): Color {
    return Color.instance
  }

  get number (): number {
    return Math.floor(Math.random() * 256)
  }

  generate (): string {
    return `rgb(${this.number},${this.number},${this.number});`
  }
}

console.log(Color.getInstance().generate())