// Login SignUp Page
const {handleCreateUserSignUp, handleLoginUser} = require("../controllers/user");
const express = require("express");

const router = express.Router();
router.post("/", handleCreateUserSignUp);
router.post("/login", handleLoginUser);

module.exports = router;
