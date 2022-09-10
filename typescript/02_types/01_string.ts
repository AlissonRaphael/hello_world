// implicit
let firstName = 'Jon'
console.log(typeof firstName) // string

// explicit
let lastName: string = 'Snow'
console.log(typeof lastName) // string


// firstName = 30 -> error TS2322: Type 'number' is not assignable to type 'string'
firstName = 'Aegon'
lastName = 'Targaryen'
console.log(firstName, lastName)
