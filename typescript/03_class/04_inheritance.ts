class Person {
  private ageGroup: string

  constructor(public name: string, public age: number) {
    this.ageGroup = age >= 18 ? 'adult' : 'teen'
  }

  protected bonus (): number {
    return this.ageGroup === 'adult' ? 0.2 : 0
  }
}

class Employee extends Person {

  constructor(public name: string, public age: number, public salary: number) {
    super(name, age)
    this.salary = salary
  }

  calculate (): void {
    console.log(this.salary+this.salary*this.bonus())
  }

}

const Alice = new Employee('Alice', 20, 2000)
Alice.calculate()


class Executive extends Employee {
  isManager: boolean = true

  constructor(public name: string, public age: number, public salary: number) {
    super(name, age, salary)
  }

  protected bonus(): number {
    return super.bonus()+0.1
  }

  calculate (): void {
    console.log(this.salary+this.salary*this.bonus())
  }
}

const Michael = new Executive('Michael', 30, 2000)
Michael.calculate()
