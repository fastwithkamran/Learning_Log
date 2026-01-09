// Arrays are mutable

let arr=[1,3,5,7,9];
console.log(arr,typeof arr); //The datatype of arrays in js is 'object'
console.log(arr.length);

// Since arrays are mutable
arr[0]=2436;
console.log(arr);

// To convert array into strings
console.log(arr.toString())

// To join arrays
console.log(arr.join(" and "));

// Pop-Delete last element
console.log(arr.pop());
console.log(arr)

// Push-Insert an element in the last
console.log(arr.push("Kamran"))
console.log(arr.push(331))
console.log(arr)

// Shift-Removes and display first element
console.log(arr.shift());
console.log(arr)

// UnShift-Add an element in the beginning
console.log(arr.unshift("Happy"));
console.log(arr)

// Delete-To delete an element--It removes the value from the memory but it exits in the memory
console.log(delete arr[1]);
console.log(arr);
console.log(arr[1])

// Concat-Used to join arrays into given array
let a=[1,2,3]
let b=[4,5,6]
let c=[7,8,9]

console.log(a.concat(b,c)); //It returns the new array, does not chnage existing arrays

// Sort-It sorts the array alphabetically
let d=[6,3,9,1]
console.log(d.sort())
let e=["Kamran","Ayaz","Syed"]
console.log(e.sort())

// Splice-It removes the elements in a range given in an array, and displays the reomves elements
let number=[1,2,3,4,5]
console.log(number.splice(1,3))
console.log(number)

// It also use to remove and add new elements
let digit=[6,7,8,9,10]
console.log(digit.splice(1,3,24,36))
console.log(digit)

// Slice-It does not change the original array. It returns a new array containing the elements you selected.
let count=[1,2,3,4,5]
console.log(count.slice(2))
console.log(count.slice(1,3)) // index number 3 will not be included

// Reverse- It reverses the entire original array 
console.log(count.reverse())
console.log(count)

// Array.from-Used to create an array from an object.Array.from() is designed to take one "iterable" (like a single string or a set) and turn it into an array. If you pass it multiple strings, it will only look at the first one and ignore the rest, because it only expects one argument.
console.log(Array.from("My"))