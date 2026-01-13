// Strings are immutable once they created and allocated in memory you cant change it.

let a="Kamran";
console.log(a[0]);
console.log(a[3]);
console.log(a[4]);

console.log(a.length);

let real_name="Kamran"
let friend="Rayyan"

console.log("His name is "+real_name+" and his friend is "+friend);
// Template Literals Syntax 

// Between Tab and ESC key
// Can use double quotes inside a string 
console.log(`The name is ${real_name} and his friend name is ${friend}`)

console.log(`My name is "Kamran"`);

// Escape Sequence
//  \n --New line

console.log(friend.toLowerCase());
console.log(friend.toUpperCase());

// Slicing a string
console.log(friend.slice(1,4)); //Here 1 is included and 4 is not

console.log(friend.slice(1)); //It means to start from 1 to end 

// Replacing characters in a string

console.log(friend.replace("Ray","Kam"));
// If we have two matches in a string then it will replace the first match
let fruit="apple's apple";
console.log(fruit.replace("app","bana"));

// Concatinating a string
console.log(friend.concat(" "+real_name));

// Trimming a string--means removing whitespaces inbetween the string
let food="   Icecream    ";
console.log(food);
console.log(food.trim());

// Practice
// Find the length of 
console.log("has\"".length);
// StartWith function
console.log(real_name.startsWith("Kam"));
// EndWith function
console.log(real_name.endsWith("Yan"));