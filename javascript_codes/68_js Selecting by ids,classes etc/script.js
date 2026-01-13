let boxes=document.getElementsByClassName("box")
console.log(boxes)

// boxes[2].style.backgroundColor="red"

document.getElementById("bluebox").style.backgroundColor="blue";

// Using Query selector--It will only return the first match of the class; Also remember to put .class while using query selector
document.querySelector(".box").style.backgroundColor="green";

// To access all the classes we use,
document.querySelectorAll(".box")
// But it will return a Node list that can be see by
console.log(document.querySelectorAll(".box"));

// Now to access all the elements we have to use any for loop
document.querySelectorAll(".box").forEach((e)=>{
e.style.backgroundColor="green"
})

// getElementsByTagName will return all the matching HTMLCollection
console.log(document.getElementsByTagName("div"))

// To get element by name; similar to Id- it use index
document.getElementsByName("FAST")[0].style.backgroundColor="purple"