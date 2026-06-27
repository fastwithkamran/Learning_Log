const User = require("../models/user");

async function handleGetAllUsers(req, res) {
  const allDbUsers = await User.find({});
  return res.json(allDbUsers);
}

async function getUserById(req, res) {
  const user = await User.findById(req.params.id);

  if (!user) return res.status(404).json({ err: "User not found" });
  return res.json(user);
}

async function createUser(req, res) {
  const body = req.body;

  if (!body.first_name || !body.last_name || !body.email || !body.job_title) {
    return res.status(400).json({ msg: "All fields required" });
  }

  const result = await User.create({
    first_name: body.first_name,
    last_name: body.last_name,
    email: body.email,
    job_title: body.job_title,
  });
  return res.status(201).json({ msg: "Success" });
}

async function updateUserById(req, res) {
  const body = req.body;

  await User.findByIdAndUpdate(req.params.id, body, {
    returnDocument: "after",
  });

  return res.json("Succeed");
}

async function deleteUserById(req, res) {
  await User.findByIdAndDelete(req.params.id, {
    returnDocument: "after",
  });
  return res.json("Succeed");
}

module.exports = {
  handleGetAllUsers,
  getUserById,
  createUser,
  updateUserById,
  deleteUserById,
};
