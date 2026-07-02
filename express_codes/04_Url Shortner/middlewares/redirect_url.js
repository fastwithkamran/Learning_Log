const URL = require("../models/url");

async function handleCheckDuplicatedUrl(req, res, next) {
  const body = req.body;
  if (!body || !body.url)
    return res.json({
      empty_error: "Type URL Dont PRANK my Server",
    });
  const result = await URL.findOne({ redirectURL: body.url });

  if (!result) next();
  else return res.json({ err: "This URL shortlink already being generated, try other" });
}

module.exports = handleCheckDuplicatedUrl;
