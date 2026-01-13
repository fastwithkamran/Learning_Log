// Calcullate Factorial using reduce and for loops
const prompt = require('prompt-sync')();

let num=Number(prompt("Enter a number: "));
let result=1;

for(let i=1;i<=num;i++){
result*=i;  
}
console.log(result)

let arr=[];
for(let i=1;i<=num;i++){
arr[i-1]=i;
}

let factorial=(a,b)=>{
    return a*b
}
console.log(arr.reduce(factorial))