const fs = require("fs");

// Sync
// fs.writeFileSync('./test.txt', "Hey there")

// Async
// fs.writeFile("./test.txt", "Hey there Asynchronous", (err) => {});

// Sync return the value
// const result = fs.readFile("./contacts.txt", "utf-8");
// console.log(result);

// Async doesnt return
fs.readFile("./contacts.txt", "utf-8", (err, result) => {
  if (err) {
    console.log("Error", err);
  } else console.log(result);
});

fs.appendFileSync('./test.txt',`\n${new Date().getDate().toLocaleString()}`)

fs.copyFileSync('./test.txt','./contacts.txt')

fs.unlinkSync("./test.txt")

console.log(fs.statSync("./contacts.txt"));

// fs.mkdirSync('./myDocs',{recursive:true})
