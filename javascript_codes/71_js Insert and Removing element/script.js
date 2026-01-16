document.querySelector(".box")

// InnerHTML- displays the inner HTML of the element
document.querySelector(".container").innerHTML
document.querySelector(".box").innerHTML
// InnerText- displays the inner text of the element
document.querySelector(".box").innerText
// Can be used to change the text
document.querySelector(".box").innerHTML="My name is Kamran"

// OuterHtml- displays the element HTML with the inner HTML
document.querySelector(".box").outerHTML
document.querySelector(".container").outerHTML

// tagName- return the HTML tag or element node of the CSS selector, always in UPPERCASE
document.querySelector(".container").tagName

// nodeName- similar to tagName but it also shows all types of nodes
document.querySelector(".container").nodeName
'DIV'

/* What is a Node in the DOM?

In the DOM, a node means:

Any single piece of the HTML document tree

HTML is converted by the browser into a tree structure, and every item in that tree is a node. 
Node Type	Meaning
1	Element node
3	Text node
8	Comment node
9	Document node */ 

// textContent-- used to display the text inside the CSS selector

document.querySelector(".container").textContent

// hidden property-- used to hide the element
document.querySelector(".container").hidden
document.querySelector(".container").hidden=true

// remove()-- to remove a node
document.querySelector(".box").remove()

// Classlist-- display the class inside the CSS selector Use for Add/remove/toggle classes

document.querySelector(".container").classList

// adding a class
document.querySelector(".container").classList.add("Kamran")
// removing a class
document.querySelector(".container").classList.remove("Kamran")
// toggling a class
document.querySelector(".container").classList.toggle("container")
// contains-- to check is that CSS selector contains that class
document.querySelector(".container").classList.contains("red")

// ClassName-- display only the names of the classes inside the CSS selector use for Read or set all classes
document.querySelector(".container").className


