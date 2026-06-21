// async function getData() {
//   return new Promise((resolve, reject) => {
//     setTimeout(() => {
//       resolve(777);
//     }, 3000);
//   });
// }

async function getData() {
  let x = await fetch("https://jsonplaceholder.typicode.com/todos/1");
  // .then((response) => response.json())
  // .then((json) => console.log(json));

  let data = await x.json();
  return data;
}

async function main() {
  console.log("Loading modules");
  console.log("Doing something else");

  // CallBack Approach
  // let data = getData();
  // data.then((res) => {
  // console.log(res);
  // });

  // Async / Await Approach
  let data = await getData(); // always be in async function
  console.log(data);

  console.log("process data");
}

main();
