class Andress {
  constructor (public city: string, public andress: string, public number: number) {}

  // public
  welcome(): string {
    return `Welcome to ${this.city}`
  }

  public print(country: string): string {
    return `${this.country(country)}, ${this.city} - ${this.andress}, N${this.number}`
  }

  private country (country: any): string {
    const countries: { [br: string]: string, uk: string, us: string } = {
      br: 'Brazil',
      uk: 'United Kingdom',
      us: 'United States'
    }

    return countries[country]
  }

}

const home = new Andress('London', 'House of Commons', 9483)
console.log(home.print('uk'))

const job = new Andress('New York', 'Wall Street', 438)
console.log(job.welcome())
console.log(job.print('us'))
