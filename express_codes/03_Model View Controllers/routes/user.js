const express = require("express");
const {
  handleGetAllUsers,
  getUserById,
  createUser,
  updateUserById,
  deleteUserById,
} = require("../controllers/user");
const router = express.Router();

// Routes
router.route("/").get(handleGetAllUsers).post(createUser)

router
  .route("/:id")
  .get(getUserById)
  .patch(updateUserById)
  .delete(deleteUserById);

module.exports = router;
