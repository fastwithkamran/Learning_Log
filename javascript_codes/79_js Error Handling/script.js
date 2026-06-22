// try catch works synchronously will die on asynchronous operations like setInterval etc

let a = prompt("Enter first number"); // by default prompt returns a string
let b = prompt("Enter second number");
try {
  if (isNaN(a) || isNaN(b)) throw SyntaxError("String not allowed"); // isNaN automatically converts string into int if you entered a valid integer
  let sum = parseInt(a) + parseInt(b);
  console.log(sum);
} catch (e) {
  console.log(e);
}

function main() {
  try {
    console.log(sum);
    return true;
  } catch (error) {
    console.log("sum is not defined");
    return false;
  } finally {
    console.log("Main is ended");
  }
}

let c = main();

console.log(c);
