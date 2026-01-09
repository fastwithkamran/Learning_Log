/* In JS: The "looping" and "memory allocation" are considered "solved problems." The language provides .filter(), .map(), and .reduce() as standard methods so you can focus only on the logic. */ 

// Map
// If I given to store the elements of the existing arrays into the new arrays then to write the shortest code 
let arr = [1, 2, 3, 4, 5]
let newarr = []
for (let index = 0; index < arr.length; index++) {
    const element = arr[index];
    newarr.push(element ** 2)
}
console.log(newarr)

// In JS, The shortest way is using map predefined-function
/* e represents each individual element as the loop moves through the array.
The most important thing to remember is that map() creates a new array and leaves the original one exactly as it was. */

let newArr = arr.map((e,index,array) => { //we can used index and array too but here is just written to remind
    return e ** 2;
})
console.log(newArr)

// Filter
let greaterthan3=(e)=>{ //The => is called a Fat Arrow. It is a shorter way to write a function. In code, (e) => { ... } is the same as writing function(e) { ... }.
    if(e>3)
        return true
    else
        return false
}

console.log(arr.filter(greaterthan3))  //In JavaScript, arr.filter() is what we call Internal Iteration. The loop is still there, but it is "hidden" inside the JavaScript engine.

// Reduce
let a=[1,2,3,4,5,6]
let red=(a,b)=>{
    return a*b
}
console.log(a.reduce(red)) 

/* How the "a" and "b" work
You mentioned taking the 1st element as a and 2nd as b. Here is exactly what happens:
acc (Accumulator): This is the "running total." It carries the result from the previous step to the next step.
current: This is the current element the loop is sitting on (just like e in your filter). */

