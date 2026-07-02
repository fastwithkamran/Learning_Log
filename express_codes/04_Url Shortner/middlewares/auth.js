const { getUser } = require("../service/auth");

function checkForAuthorization(req, res, next) {
  req.user = null;
  const tokenCookie = req.cookies.uid;
  if (!tokenCookie) return next();

  req.user = getUser(tokenCookie);
  return next();
}

function restrictTo(roles = []) {
  return function (req, res, next) {
    if (!req.user) return res.redirect("/login");
    if (!roles.includes(req.user.role)) return res.end("Unauthorized");

    next();
  };
}
module.exports = {
  checkForAuthorization,
  restrictTo,
};
