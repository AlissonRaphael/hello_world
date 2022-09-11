let planet: [string, string, number, boolean] = ['Earth', 'Solar sytem', 3, true]
console.log(`${planet[0]} is the ${planet[2]}rd planet of the ${planet[1]} and ${planet[3] ? 'has' : 'has no'} life`)

// planet = [2019, true, false, 'moon'] -> error TS2322: Type 'string' is not assignable to type 'boolean'

planet = ['Mars', 'Solar sytem', 4, false]
console.log(`${planet[0]} is the ${planet[2]}rd planet of the ${planet[1]} and ${planet[3] ? 'has' : 'has no'} life`)
