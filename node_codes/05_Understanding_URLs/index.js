// URL

// https:// -> **Protocol** -> Set of rules to communicate with server with SSL certificate

// www.google.com -> **Domain** -> Name of IP address

// / -> route path - /project/assignment -> nested path

// https://www.youtube.com/results**?search_query=javascript** -> Query Parameters  -> That gives us extra information about the url


const http = require("http");
const fs = require("fs");
const url= require("url")

const myServer = http.createServer((request, response) => {
  const log = `${Date()}: New Request Received ${request.url}\n`;
  const myUrl = url.parse(request.url, true)
  console.log(myUrl);
  
  fs.appendFile("log.txt", log, (err, data) => {
    switch (myUrl.pathname) {
      case "/":
        const queryparameter=myUrl.query.myUrl
        response.end(`Hello ${queryparameter}`);
        break;
      case "/about":
        response.end("Hello From Karachi");
        break;
      default:
        response.end("Hello from Pakistan");
    }
  });
});

myServer.listen(8000, () => console.log("Server Started"));


