// Schema
// Think of a Schema as a blueprint or a recipe. It just describes what the data should look like

const mongoose = require("mongoose");

const urlSchema = new mongoose.Schema({
  shortId: {
    type: String,
    required: true,
    unique: true,
  },
  redirectUrl: {
    type: String,
    required: true,
  },
  visitHistory: [{ timestamp: { type: String } }],
},
{timestamps: true}
);

// mongoose.model() takes that blueprint and turns it into a JavaScript class (a Model). The model is the actual tool you use to talk to the database.
const URL = mongoose.model("url", urlSchema);
// "url" (First Argument): This is the singular name of your model. Mongoose automatically looks at this name, makes it lowercase, pluralizes it, and looks for a collection named urls inside your MongoDB database.
// urlSchema (Second Argument): This tells the model which structural blueprint to enforce on that collection

module.exports = URL;