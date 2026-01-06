function nice(name) {

    console.log("I am "+name)
    console.log(name+" studies in FAST")
    console.log(name+" is learning javascrpit")
}

nice("Kamran")

function sum(a,b){
    return a+b
}
let result=sum(5,6)

console.log("The result of the sum is "+result)

// NaN means not a number

// To pass a function through a function

const fun1=(c)=>{
    console.log("I am an arrow function "+c)
}

fun1(54)
fun1(83)
fun1(9876)

//Note: Hoisting Traditional functions (using the function keyword) are hoisted, meaning you can call them before you write them in the code. Arrow functions are NOT hoisted.

