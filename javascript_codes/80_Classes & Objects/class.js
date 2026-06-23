class Animal {
  // No access modifiers in js
  // No attributes in js
  constructor(name) {
    this.naam = name;
    console.log("Object is created");
  }

  eats() {
    console.log("kha raha hon");
  }

  jumps() {
    console.log("kood raha hon");
  }
}

// Inheritance
class Lion extends Animal {
  constructor(name) {
    super(name);
    console.log(`${name} is created`);
  }

  set name(name) {
    this.naam = name;
  }

  get name() {
    return this.naam; // _ use to when getter name and property name is same
  }
  //  Method Overriding
  eats() {
    super.eats();
    console.log("Lion kha raha hai");
  }
  roar() {
    console.log("sher cheeq raha hai");
  }
}

let a = new Animal("Bunny");
console.log(a);

let l = new Lion("Sheyro");
console.log(l);

console.log(l.name);

l.name = "Tiger"; //Call the setter

console.log(l.name);