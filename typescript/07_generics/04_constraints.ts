class Schedule <D extends Date, S extends string> {
  constructor (public start: D, public end: D, public op: S) {}

  get startValue (): number {
    return this.start.valueOf()
  }

  get endValue (): number {
    return this.end.valueOf()
  }

  execute (): string | number | boolean {
    let result: string | number | boolean;

    switch (this.op) {
      case 'difference':
        result = Math.abs(this.startValue-this.endValue)
        break
      case 'isValid':
        result = this.startValue < this.endValue
        break
      default:
        result = 'Operation not valid'
        break
    }

    return result
  }
}

const date1: Date = new Date(2001,8,11)
const date2: Date = new Date(1989,11,9)

const valid = new Schedule(date1, date2, 'isValid').execute()
const diff = new Schedule(date1, date2, 'difference').execute()

console.log({ valid, diff })
