const express = require("express");
const { connectToMongoDB } = require("./connection.js");

const urlRoute = require("./routes/url");
const staticRoute = require("./routes/staticRouter.js");

const path = require("path");

const app = express();
const PORT = 8000;

connectToMongoDB("mongodb://localhost:27017/short-url")
  .then(() => console.log("MongoDB Connected"))
  .catch((err) => console.log("Error MongoDB Not Connect", err));

app.set("view engine", "ejs");
app.set("views", path.resolve("./views"));

app.use(express.json());
app.use(express.urlencoded());

app.use("/", urlRoute);
app.use("/", staticRoute);

app.listen(PORT, () => console.log("Server Started"));
