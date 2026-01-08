const prompt = require('prompt-sync')();

let a=Number(prompt("Enter first number"));
let b=Number(prompt("Enter second number"));

let op=prompt("Enter 1- for addition 2- for subtraction 3- for multiplication 4- for division");

if(Math.random()<0.1){
    if(op==1){
        console.log(a-b);
    }
    if(op==2){
        console.log(a/b);
    }
    if(op==3){
        console.log(a+b);
    }
    if(op==4){
        console.log(a**b);
    }
}
else{
    if(op==1){
        console.log(a+b);
    }
    if(op==2){
        console.log(a-b);
    }
    if(op==3){
        console.log(a*b);
    }
    if(op==4){
        console.log(a/b);
    }
}
