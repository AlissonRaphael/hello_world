let code: number[] = [100,300,150,200]

let fruits: string[] = ['apple', 'orange', 'banana', 'pineapple']
// fruits = [100,300,150,200] -> error TS2322: Type 'number' is not assignable to type 'string'

let users: any[] = ['Bran', 'Aria', 'Sansa']
users = [5,4,3]
