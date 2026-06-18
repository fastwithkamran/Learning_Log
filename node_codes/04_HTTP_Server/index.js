const http = require("http");
const fs = require("fs");

const myServer = http.createServer((request, response) => {
  const log = `${Date()}: New Request Received ${request.url}\n`;
  fs.appendFile("log.txt", log, (err, data) => {
    switch (request.url) {
      case "/":
        response.end("Hello From Server");
        break;
      case "/favicon.ico":
        response.end("Hello From Karachi");
        break;
      default:
        response.end("Hello from Pakistan");
    }
  });
});

myServer.listen(8000, () => console.log("Server Started"));
