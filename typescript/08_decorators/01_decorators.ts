function PrintCLass (constructor: Function) {
  console.info('Call...')
  console.log(constructor)
}

@PrintCLass
class UserName {
  constructor (public fName: string, public lName: string) {}

  print (): void {
    console.log(`${this.fName} ${this.lName}`)
  }
}

const alissonUser = new UserName('Alisson', 'Oliveira')
