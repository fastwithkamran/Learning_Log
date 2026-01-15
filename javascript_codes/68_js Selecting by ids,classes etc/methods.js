// matches,closest and contain methods

// Matches--Will match the CSS selector with the specific element
console.log(e=document.getElementsByTagName("div"))

console.log(e[2].matches("#bluebox"))

console.log(e[1].matches("#bluebox"))

// Closest-- It will look for the nearest ancestor that matches the CSS selector. The element also check itself, then go for its ancestors

console.log(e[3].closest("#bluebox"))
console.log(e[3].closest(".container"))
console.log(e[3].closest("html"))
console.log(e[2].closest("#bluebox"))

// Contains-- It will check the elementA inside the elementB and return true or when elementA==elementB

console.log(document.querySelector(".container").contains(e[2]))
console.log(document.querySelector(".container").contains(document.querySelector(".box")))
console.log(document.querySelector(".container").contains(document.querySelector("body")))

