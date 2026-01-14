// const prompt= require('prompt-sync')();

// Q1-2-3

// do{
// let age=Number(prompt("Enter your age"));
//     if (age<0) {
//         console.error("Cant enter negative number")
//     }
// else if(age>18)
//     alert("You can drive")

// var ans=Number(prompt("Do you want to see the prompt again? Yes-1 / No-2"))
// }while(ans==1);


// Q4
// if(Number(prompt("Enter a number"))>4){
//    location.href=("https://www.google.com")
// }

// Q5
let num=Number(prompt("Enter 1-Yellow 2-Red"))
if(num==1){
    document.body.style.backgroundColor="yellow"
}
else if(num==2){
    document.body.style.backgroundColor="Red"
}
else{
    document.body.style.backgroundColor="Green"
}