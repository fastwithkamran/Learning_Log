let button = document.querySelector(".button")

button.addEventListener("click", (event) => {
    let div = document.createElement("div")
    div.setAttribute("class", "card")

    let div0 = document.createElement("div")
    div0.setAttribute("class", "image")

    let div1 = document.createElement("img")

    let div11 = document.createElement("span")
    div11.setAttribute("class", "duration")

    let div2 = document.createElement("div")
    div2.setAttribute("class", "text-box")


    let div3 = document.createElement("div")
    div3.setAttribute("class", "title")

    let div4 = document.createElement("div")
    div4.setAttribute("class", "about")


    let div5 = document.createElement("span")
    div5.setAttribute("class", "cName")


    let div6 = document.createElement("span")
    div6.setAttribute("class", "views")


    let div7 = document.createElement("span")
    div7.setAttribute("class", "monthsOld")


    function createCard(title, cName, views, monthsOld, thumbnail, duration) {

        div3.innerHTML = `${title}`;
        div5.innerHTML = `${cName} | `;

        if (views > 1000000) {
            var count = views.toString().slice(0,1) + "." + views.slice(1, 3) + "M"
        }

        else if (views > 100000) {
            var count = views.toString().slice(0, 3) + "K"
        }
        div6.innerHTML = `${count} views | `;
        div7.innerHTML = `${monthsOld} months ago`;
        div1.src = `${thumbnail}`;
        div11.innerHTML = `${duration}`
    }
    let title = prompt("Enter title");
    let cName = prompt("Enter Channel Name")
    let views = prompt("Enter number of views")
    let monthsOld = prompt("Enter the number of months the video is old")
    let thumbnail = prompt("Enter the link of thumbnail")
    let duration = prompt("Enter video duration")
    createCard(title, cName, views, monthsOld, thumbnail, duration)

    document.querySelector(".container").append(div)
    div.append(div0)
    div.append(div2)
    div0.append(div1)
    div0.append(div11)
    div2.append(div3)
    div2.append(div4)
    div4.append(div5)

    div4.append(div6)

    div4.append(div7)

}
)



