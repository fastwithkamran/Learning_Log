console.log("My name is Kamran")

let age = 5;
let bro = 2;
if (age > 18) {
    console.log("You are big")
}
else {
    console.log("You are small")
}

console.log(age + bro)
console.log(age - bro)
console.log(age * bro)
console.log(age ** bro)
console.log(age / bro)
console.log(age % bro)


let a = 5;
let b = "5";

if (a == b) {
    console.log("same values")
    if (a === b) {
        console.log("Same datatype")
    }
    else {
        console.log("Not same datatype")
    }
}
else {
    console.log("not same values")
}

let j = 7;
let m = 12;

// Using ternary operator
let c = j > m ? (j - m) : (j - m);
console.log(c);

// Practice 1

let ageperson = 16;

if (age > 10 && age < 20)
    console.log("Yes");
else
    console.log("No");

// Practice 3

let num = 8;

if (num % 2 == 0)
    console.log("Number is divisible by 2")

else {
    if (num % 3 == 0) {
        console.log("Number is divisible by 3")
    }
    else {
        console.log("Number is not divisible by 3 and 2")
    }
}

let person = 25;
console.log(person > 18 ? "You can drive" : "You cannot drive")