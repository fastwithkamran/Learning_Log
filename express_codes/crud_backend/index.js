require('dotenv').config();
const express = require("express");
const cors = require('cors');
const mongoose = require('mongoose');
const userRouter = require("./routes/user");

const app = express();
const PORT = process.env.PORT || 8000; 

// Connection
mongoose.connect(process.env.MONGO_URI)
  .then(() => console.log("Connected to Cloud MongoDB Atlas!"))
  .catch((err) => console.error("Database connection failure:", err));
// Middleware
app.use(express.json());
app.use(cors({
  origin: true,
  methods: ["GET", "POST", "PUT", "PATCH", "DELETE", "OPTIONS"],
  allowedHeaders: ["Content-Type", "Authorization"],
  credentials: true
}));

// Routes
app.use("/users", userRouter);

if (process.env.NODE_ENV !== 'production') {
  app.listen(PORT, () => console.log(`Server started locally on port ${PORT}`));
}

module.exports = app;