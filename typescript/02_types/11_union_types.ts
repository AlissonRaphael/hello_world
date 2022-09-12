let ammount: number | string
ammount = 720000
ammount = '830.000'
console.log(ammount)

type Car = {
  model: string,
  price: number,
  motor: string,
  manufacturer: string,
}

type Bicycle = {
  price: number,
  color: string
}

let transport: Car | Bicycle
transport = { model: 'DeLorean', price: 9999, manufacturer: 'DeLorean Motor Company', motor: '2849 cc' }
console.log(transport)
