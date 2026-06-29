const express = require("express");
const {
  handleGetAllUsers,
  createUser,
  updateUserById,
  deleteUserById,
} = require("../controllers/user");
const router = express.Router();

// Routes
router.route("/").get(handleGetAllUsers).post(createUser)

router
  .route("/:id")
  .patch(updateUserById)
  .delete(deleteUserById);

module.exports = router;
