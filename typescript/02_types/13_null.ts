// "strictNullChecks": true, /* When type checking, take into account 'null' and 'undefined'. */

let size = 3000
// size = null -> error TS2322: Type 'null' is not assignable to type 'number'.

let rest: number | null = 60
rest = null

console.log(rest)
