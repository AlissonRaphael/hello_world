let house
console.log(typeof house) // undefined
house = 12
console.log(typeof house) // number
house = 'Stark'
console.log(typeof house) // string

let country: any = null
console.log(typeof country) // object
country = 1
console.log(typeof country) // number
country = 'North'
console.log(typeof country) // string
