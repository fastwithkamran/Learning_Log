const URL = require("../models/url");

async function handleGetAnalytics(req, res) {
  const shortId = req.query.shortId;
  const result = await URL.findOne({ shortId });

  if (!result) {
    return res.render("home", {
      error: "Invalid Code",
    });
  } else {
    return res.render("home", {
      shortUrl: shortId,
      redirectUrl: result.redirectUrl,
      totalClicks: result.visitHistory.length,
    });
  }
}

module.exports = {
  handleGetAnalytics,
};
