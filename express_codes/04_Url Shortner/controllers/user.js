const { setUser } = require("../service/auth");
const USER = require("../models/user.js");
const { v4 : uuidv4 } = require("uuid");

async function handleCreateUserSignUp(req, res) {
  const { name, email, password } = req.body;
  await USER.create({
    name,
    email,
    password,
  });
  return res.redirect("/");
}

async function handleLoginUser(req, res) {
  const { email, password } = req.body;
  const user = await USER.findOne({ email, password });
  if (!user)
    return res.render("login", {
      error: "Invalid Email or Password",
    });
  const sessionId = uuidv4();
  setUser(sessionId, user);
  // ends the unique ID to the user's browser as a cookie named uid
  res.cookie("uid", sessionId);
  return res.redirect("/");
}

module.exports = { handleCreateUserSignUp, handleLoginUser };
