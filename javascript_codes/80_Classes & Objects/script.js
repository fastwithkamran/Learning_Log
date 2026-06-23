let obj = {
  a: 1,
  b: "Harry",
};

console.log(obj);

// [[Prototype]]
// Every time you create an object or array, JavaScript automatically links a hidden property called [[Prototype]] to it.

let animal = {
  eats: true,
};

let rabbit = {
  jumps: true,
};

// Prototypal inheritance is the mechanism where one object directly accesses the properties and methods of another object
rabiit.__proto__ = animal;
