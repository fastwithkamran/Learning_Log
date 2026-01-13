// Q. To generate a business name using list of adjectives, shop names, and a word
// List of adj
// Crazy-Amazing-Fire
// List of shop name
// Engine-Foods-Garment
// List of word
// Bros-Limited-Hub

// Limitations- Cant use array

let num1=Math.random();
if (num1 < 0.3)
    var name1= "Crazy";
else if (num1 < 0.6)
    var name1= "Amazing";
else
    var name1= "Fire";

let num2=Math.random();
if (num2 < 0.3)
    var name2= "Engine";
else if (num2 < 0.6)
    var name2= "Foods";
else
    var name2= "Garment";


let num3=Math.random();
if (num3 < 0.3)
    var name3= "Bros";
else if (num3 < 0.6)
    var name3= "Limited";
else
   var name3= "Hub";

console.log("Here's your Business name " + name1 +" "+ name2+" "+ name3);