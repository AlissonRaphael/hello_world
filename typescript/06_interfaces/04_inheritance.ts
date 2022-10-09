interface Data {
  data: number[]
}

interface Regiter extends Data {
  registerNumber(num: number): void
}

interface Return {
  getData(all: boolean): number[],
  printData(log?: boolean): void
}

interface DatabaseViwer extends Return {
  setDefault(nums: number[]): void
}

interface DatabaseReports extends Regiter, Return {}


class ReportsA implements DatabaseViwer {
  public data: number[] = []

  setDefault(nums: number[]): void {
    this.data = nums
  }

  getData(all: boolean): number[] {
    return all ? this.data : this.data.filter((_, index) => index < 3)
  }

  printData(log: boolean = true): void {
    if (log) {
      console.log(this.getData(true))
    } else {
      console.table(this.getData(true))
    }
  }
}

class ReportsB implements DatabaseReports {
  public data: number[] = []

  getData(all: boolean): number[] {
    return all ? this.data : this.data.filter((_, index) => index < 6)
  }

  registerNumber(num: number): void {
    this.data.push(num)
  }

  printData(log: boolean = true): void {
    log ? console.log(this.getData(true)) : console.table(this.getData(true))
  }
}
