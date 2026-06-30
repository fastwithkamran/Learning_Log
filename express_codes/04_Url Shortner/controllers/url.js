// Controller
// The controller is the brain and main functionality of your application

const URL = require("../models/url");
const { nanoid } = require("nanoid");

async function handleGenerateNewShortURL(req, res) {
  const body = req.body;
  if (!body.url) return res.status(400).json({ error: "URL is required" });
  const ID = nanoid(8);

  //   Create a new document in my database
  await URL.create({
    shortId: ID,
    redirectUrl: body.url,
    visitHistory: [],
  });

  return res.render("home", {
    id: ID,
  });
}

module.exports = {
  handleGenerateNewShortURL,
};
