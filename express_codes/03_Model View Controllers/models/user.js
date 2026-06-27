const mongoose = require("mongoose");
const { timeStamp } = require("console");

// Schema
const userSchema = new mongoose.Schema(
  {
    first_name: {
      type: String,
      required: true,
    },
    last_name: {
      type: String,
      required: true,
    },
    email: {
      type: String,
      required: true,
      unique: true,
    },
    job_title: {
      type: String,
    },
  },
  { timeStamp: true },
);

const User = mongoose.model("user", userSchema);

module.exports = User;
