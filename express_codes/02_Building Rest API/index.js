const express = require("express");
const fs = require("fs");
const users = require("./MOCK_DATA.json");
const app = express();
const PORT = 8000;

// Middleware
app.use(express.urlencoded({ extended: false }));

app.use((req, res, next) => {
  fs.appendFile(
    "log.txt",
    `${Date.now()}: ${req.method}: ${req.url}\n`,
    (err) => {
      next();
    },
  );
});

// Route
app.get("/users", (req, res) => {
  const html = `<ul>
        ${users
          .map((user) => {
            return `<li>${user.first_name}</li>`;
          })
          .join("")}
    </ul>`;
  res.send(html);
});

// Routing through json data
app.get("/api/users/:id", (req, res) => {
  const id = Number(req.params.id); //params (short for parameters) refers to dynamic placeholders in a web address (URL) used to pass specific data from the client to the server
  // so find like iterates through the database, but find iterates the array, so it is assuming every user that is separated by , a separate element, so it is going through the element which it is considering an object, finding  that object id and matches the condition
  const user = users.find((user) => user.id === id);
  return res.json(user);
});

app
  .route("/api/users")
  .get((req, res) => {
    return res.json(users);
  })
  .post((req, res) => {
    const body = req.body;
    console.log("Body ", body);

    // spread syntax (...) unrolls or "expands" an collection—like an array, an object, or a string—into its individual items
    users.push({ ...body, id: users.length + 1 });

    // JSON.stringify(users) converts the JavaScript array into a string format that can be saved into a text file.
    fs.writeFile("./MOCK_DATA.json", JSON.stringify(users), (err) => {
      console.log(err);
      return res.json("Error");
    });
    return res.json({ id: users.length });
  })
  .patch((req, res) => {
    const body = req.body;

    // findIndex is a built-in JavaScript loop method. It scans your array from left to right, looking at each user item one by one, and returns the index of that element
    const userIndex = users.findIndex((user) => body.id === user.id);

    if (userIndex === -1) {
      return res.json("Not found");
    }
    // replaces the old user data with the newly updated data at that specific index position.
    users[userIndex] = { ...users[userIndex], ...body };

    fs.writeFile("./MOCK_DATA.json", JSON.stringify(users), (err) => {
      if (err) {
        return res.json(err);
      } else {
        const result = users.find(
          (user) => Number(body.id) === Number(user.id),
        );
        return res.json(result);
      }
    });
  })
  .delete((req, res) => {
    const body = req.body;

    const userIndex = users.findIndex(
      (user) => Number(body.id) === Number(user.id),
    );

    // delete the user starting from the userIndex up to 1
    users.splice(userIndex, 1);

    fs.writeFile(
      "./MOCK_DATA.json",
      JSON.stringify(users, null, 100),
      (err) => {
        if (err) {
          return res.json(err);
        } else {
          return res.json("successfully deleted");
        }
      },
    );
  });

app.listen(PORT, () => console.log("Server started"));
