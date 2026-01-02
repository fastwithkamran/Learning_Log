// var is a global datatype and let is a block datatype 


var a = 5;
var b = 6;
var c = "Hello WOrld";

{
    console.log(a)//using the value declared through var
}

{
    let a = 7;//for that block
    console.log(a)
}
var a = 66; // it changes globally

console.log(a + b)
console.log(typeof a, typeof b, typeof c)

// Datatypes
// Primitive Data Type
// There are 7 primitive data types
// NULL NUMBER STRING SYMBOL UNDEFINED BOOLEAN 

let x = 6;
let y = 76.3;
let n = undefined;
let u = null;
let o = "Kamran Bhai";

console.log(x, y, n, u, o)
console.log(typeof x, typeof y, typeof n, typeof u, typeof o)

let q = {
    "name": "Kamran", //remember semicolon
    "job code": 2436,
    is_handsome: true
}

console.log(q)
q.salary = "765crores";
console.log(q)


//Practice 1
console.log("To create a variable of type string and adding a number to it")

let char = "Kamran";

console.log(char + 9);

// Practice 2
console.log(typeof char);

// Practice 3&4
const k = {
    name: "kamran"
}
// const k=5; 

console.log(k)

k.salary = "54crore";

console.log(k)

//Practice 5
let dictionary = {
apple: "fruit",
car:"vehicle",
kamran: "person"
}

console.log(dictionary)