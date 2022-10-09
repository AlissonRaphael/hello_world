enum Viwer {
  Log,
  Table
}

type PrintOptions = {
  all: boolean
  type: Viwer
}

interface Report {
  name: string,
  data: number[]
  print(options: PrintOptions): void,
  register(num: number): number
}

class ProgressionReport implements Report {
  constructor (public name: string, public data: number[]) {}

  print(options: PrintOptions): void {
    const { all } = options
    const data = all ? this.data : this.data.filter((_, index) => index < 5)

    if (options.type === Viwer.Log) {
      console.log(data)
    } else if (options.type === Viwer.Table) {
      console.table(data)
    }
  }

  register(num: number): number {
    return this.data.push(num)
  }
}

const progression = new ProgressionReport('Progression', [20,30,7,19,1,0,0,8])
progression.print({ type: Viwer.Table, all: true })
progression.register(10)
progression.register(3)
progression.print({ type: Viwer.Log, all: false })
progression.register(11)
progression.print({ type: Viwer.Log, all: true })
