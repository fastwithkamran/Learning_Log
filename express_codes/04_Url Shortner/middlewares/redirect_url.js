const URL = require("../models/url");

async function handleCheckDuplicatedUrl(req, res, next) {
  const body = req.body;
  if (!body || !body.url)
    return res.render("home", {
      empty_error: "Type URL Dont PRANK my Server",
    });
  const result = await URL.findOne({ redirectUrl: body.url });

  if (!result) next();
  else
    return res.render("home", {
      unique_error: "This URL shortcode already exist... Must be Unique URL",
    });
}

module.exports = handleCheckDuplicatedUrl;
