const User = require("../models/user");

async function handleGetAllUsers(req, res) {
  try {
    const allDbUsers = await User.find({});
    return res.status(200).json(allDbUsers);
  } catch {
    console.log("Server Error");
    return res.status(500).json({ msg: "Server error" });
  }
}

async function createUser(req, res) {
  const body = req.body;

  if (!body.first_name || !body.last_name || !body.email) {
    return res.status(400).json({ msg: "All fields required" });
  }

  const result = await User.create({
    first_name: body.first_name,
    last_name: body.last_name,
    email: body.email,
  });
  return res.status(201).json({ msg: "User Created" });
}

async function updateUserById(req, res) {
  const body = req.body;

  const updates = {};

  if (body.first_name && body.first_name.trim() !== "")
    updates.first_name = body.first_name;
  if (body.last_name && body.last_name.trim() !== "")
    updates.last_name = body.last_name;
  if (body.email && body.email.trim() !== "") updates.email = body.email;

  try {
    const updatedUser = await User.findByIdAndUpdate(req.params.id, updates, {
      returnDocument: "after",
    });

    if (!updatedUser) {
      return res.status(404).json({ msg: "User id not found" });
    }

    return res.status(200).json({ msg: "User Updated Successfully" });
  } catch (error) {
    console.error("Patch update", error);
    return res.status(500).json({ msg: "Failed to process update request" });
  }
}

async function deleteUserById(req, res) {
  const userDeleted = await User.findByIdAndDelete(req.params.id, {
    returnDocument: "after",
  });

  if (!userDeleted) {
    return res.status(404).json({ msg: "User ID not found" });
  }
  return res.json({ msg: "Successfully Deleted" });
}

module.exports = {
  handleGetAllUsers,
  createUser,
  updateUserById,
  deleteUserById,
};
