function dot_coming(element) {
  let count = 1;
  let dot = document.createElement("span");
  dot.innerHTML = ".";
  element.appendChild(dot);
  setInterval(() => {
    if (count == 0) {
      dot.innerHTML = ".";
    }

    if (count == 1) {
      dot.innerHTML = "..";
    }

    if (count == 2) {
      dot.innerHTML = "...";
    }

    if (count == 3) {
      dot.innerHTML = "   ";
    }
    count = (count + 1) % 4;
  }, 1000);
}

let prom = new Promise((resolve, reject) => {
  let time = Math.random() * 7000;
  setTimeout(() => {
    let div = document.getElementById("container");
    let heading = document.createElement("h1");
    heading.innerHTML = "Initializing Hacking ";
    heading.style.color="orange"
    div.appendChild(heading);
    dot_coming(heading);
    resolve("Done");
  }, time);
});

prom
  .then(() => {
    return new Promise((resolve, reject) => {
      let time = Math.random() * 7000;
      setTimeout(() => {
        let div = document.getElementById("container");
        let heading = document.createElement("h1");
        heading.innerHTML = "Reading your IP Address ";
        heading.style.color="red"
        div.appendChild(heading);
        dot_coming(heading);
        resolve("Done");
      }, time);
    });
  })

  .then(() => {
    return new Promise((resolve, reject) => {
      let time = Math.random() * 7000;
      setTimeout(() => {
        let div = document.getElementById("container");
        let heading = document.createElement("h1");
        heading.innerHTML = "Password files Detected ";
        heading.style.color="yellow"
        div.appendChild(heading);
        dot_coming(heading);
        resolve("Done");
      }, time);
    });
  })

  .then(() => {
    return new Promise((resolve, reject) => {
      let time = Math.random() * 7000;
      setTimeout(() => {
        let div = document.getElementById("container");
        let heading = document.createElement("h1");
        heading.innerHTML = "Sending all passwords and personal files to server ";
        heading.style.color="brown"
        div.appendChild(heading);
        dot_coming(heading);
        resolve("Done");
      }, time);
    });
  })

  .then(() => {
    return new Promise((resolve, reject) => {
      let time = Math.random() * 7000;
      setTimeout(() => {
        let div = document.getElementById("container");
        let heading = document.createElement("h1");
        heading.innerHTML = "Cleaning up ";
        heading.style.color="purple"
        div.appendChild(heading);
        dot_coming(heading);
        resolve("Done");
      }, time);
    });
  });