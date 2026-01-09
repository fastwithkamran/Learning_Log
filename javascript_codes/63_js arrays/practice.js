const prompt = require('prompt-sync')();

// Q1
let arr = [];

// let size = Number(prompt("Enter the size of array"))

// for (index = 0; index < size; index++) {

// let element=Number(prompt("Enter the number")) 
//       arr[index]=element ;
// }
// console.log(arr)

// Q2
let index=-1;
do{
    index++;
    let element=Number(
    prompt("Enter the number")) 
      arr[index]=element;
} while(arr[index]!=0);

// Q3

greaterthan10=(e)=>{
    if(e>10)
        return e
}
console.log(arr.filter(greaterthan10))

// Q4

let new_arr=arr.map(e=>{
    return e**2
})
console.log(new_arr)