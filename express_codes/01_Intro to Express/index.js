const express = require("express");

const app = express(); // app is an handler function

app.get("/", (req, res) => {
  return res.send("Hello from Home Page");
});

app.get("/about", (req, res) => {
  return res.send(`Hello ${req.query.name} ${req.query.age}`);
});

app.listen(8000, () => {
  console.log("Server started");
});
