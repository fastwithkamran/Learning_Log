// IIFE - Immediately Invoke Function Expression
// It is a JavaScript function that runs the exact moment it is defined. It is wrapped in parentheses to convert it into an expression and followed by another pair of parentheses to execute it instantly.
// Its primary purpose is encapsulation and scope isolation. Historically, it was used to create a 'private box' for code. Because variables declared inside an IIFE cannot leak out, it protects data privacy and completely prevents global scope pollution—meaning it leaves no function names behind to cause naming conflicts with other scripts.
async function sleep() {
  return new Promise((resolve, reject) => {
    setTimeout(() => {
      resolve(45);
    }, 1000);
  });
}

(async function () {
  let a = await sleep();
  console.log(a);

  let b = await sleep();
  console.log(b);
})();

// Destructuring - that allows you to "unpack" values from arrays or properties from objects directly into distinct variables
let [x, y, ...rest] = [1, 5, 7, 9, 10]; // It creates a shallow copy: The rest variable is a completely separate array in memory; modifying it will not alter the original array on the right side.
console.log(x);
console.log(y);
console.log(rest);

let obj = {
  a: 1,
  b: 3,
  c: 2,
};

let { a, b } = obj;
console.log(a);
console.log(b);

// Spread Syntax
function sum(a, b, c) {
  return a + b + c;
}

let arr = [1, 2, 4];

console.log(sum(arr[0], arr[1], arr[2]));
console.log(sum(...arr));

let obj1 = {...arr};
console.log(obj1);

// Hoisting refers to the process whereby the interpreter appears to move the declarations to the top of the code before execution. Variables and Functions can thus be referenced before they are declared... but only with var keyword"

// let, var, const are the keywords that tells JavaScript how to handle the lifecycle, scope, and mutability of the container