const express = require("express");
const fs = require("fs");

const userRouter = require("./routes/user");

const { connectMongoDb } = require("./connection");
const { logReqRes } = require("./middlewares/log");

const app = express();
const PORT = 8000;

// Connection
connectMongoDb("mongodb://127.0.0.1:27017/CRUD")
  .then(console.log("MondoDB connected"))
  .catch((err) => console.log("MongoDB Error"));
// Middleware
app.use(express.urlencoded({ extended: false }));
app.use(logReqRes("log.txt"));
// Routes
app.use("/users", userRouter);

app.listen(PORT, () => console.log("Server started"));
