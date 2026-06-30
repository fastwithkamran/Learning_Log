const URL = require("../models/url");

async function handleClickRequest(req, res) {
  const shortId = req.params.shortId;
  const entry = await URL.findOneAndUpdate(
    { shortId },
    {
      $push: { visitHistory: { timestamp: new Date().toLocaleString() } },
    },
  );

  if (!entry) {
    res.status(400).json({ err: "ID not found" });
  }
  res.redirect(entry.redirectUrl);
}

module.exports = { handleClickRequest };
