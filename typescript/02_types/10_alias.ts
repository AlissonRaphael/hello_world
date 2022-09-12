type User = {
  name: string,
  salary: number,
  enter: (hour: Date) => void,
  exit: () => string
}

let duck: User
duck = {
  name: 'Duck',
  salary: 32000,
  enter: (hour) => console.log(hour),
  exit: () => `Good bye Duck`
}

console.log(duck)

type Manager = {
  isAdmin: boolean
}

type Jord = User & Manager

const jord: Jord = {
  name: 'Jord',
  salary: 122000,
  isAdmin: true,
  enter: (hour) => console.log(new Date(hour)),
  exit: () => `Good bye`
}

console.log(jord)
