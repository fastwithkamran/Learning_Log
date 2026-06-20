console.log("Learning Promises");

// let prom1 = new Promise((resolve, reject) => {
//   let a = Math.random();
//   if (a < 0.5) reject("Not supported");
//   else {
//     setTimeout(() => {
//       console.log("Hi! I am Kamran");
//       resolve("Done");
//     }, 2000);
//   }
// });

// prom1
//   .then((a) => {
//     console.log(a);
//   })
//   .catch((err) => console.log(err));

// Chaining of Promises

let prom = new Promise((resolve, reject) => {
  resolve(2);
});

prom
  .then((result) => {
    console.log(result);
    return 6;
  })
  .then((result2) => {
    console.log(result2);
  });

// caught a highly advanced JavaScript behavior! Even though "Not supported" has no time delay, the extra .then() filter sitting in front of your .catch() puts it one microtask behind prom.then(), causing 2 to win the race.

// Promise API

let prom1 = new Promise((resolve, reject) => {
  let a = Math.random();
  if (a < 0.5) reject("Not supported 1");
  else {
    setTimeout(() => {
      console.log("Hi! Promise 1");
      resolve("Done");
    }, 1000);
  }
});

let prom2 = new Promise((resolve, reject) => {
  let a = Math.random();
  if (a < 0.5) reject("Not supported 2");
  else {
    setTimeout(() => {
      console.log("Hi! Promise 2");
      resolve("Done");
    }, 1000);
  }
});

let prom3= Promise.resolve("Resolved")
// let p4 = Promise.all([prom1, prom2]);
let p4 = Promise.race([prom1, prom2, prom3]);

// Promise.all returns the array if all promises are resolved otherwise it wouldnt return
// Promise.allSettled returns the status [fulfilled or rejected] with the value
// Promise.race waits for the first promise to execute and only return its resolve/rejct values
// Promise.any waits for the first promise to resolve, if all promises rejected it displays an Aggregate Error
// Promise.resolve(value) always resolve with the given value
// Promise.reject(error) always reject with the given error

p4.then((a) => console.log(a)).catch((err) => console.log(err));

