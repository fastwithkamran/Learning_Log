const fs = require("fs");

function logReqRes(filename) {
  return (req, res, next) => {
    fs.appendFile(
      "log.txt",
      `${Date.now()}: ${req.method}: ${req.url}\n`,
      (err) => {
        next();
      },
    );
  };
}

module.exports = {
  logReqRes,
};
