class FirstDate {
  day: number
  mounth: string
  year: number

  constructor (day: number = 1, mounth: string = 'jan', year: number = 1989) {
    this.day = day
    this.mounth = mounth
    this.year = year
  }
}

const firstDate = new FirstDate(7, 'set', 2001)
console.log(firstDate)

class LastDate {
  constructor (
    public day: number = 1,
    public mounth: string = 'jan',
    public year: number = 1989
  ) {}
}

const lastDate = new LastDate(20, 'out', 2019)
console.log(lastDate)
