// has method to check an attribute in the CSS selector
document.querySelector(".box").hasAttribute("style")
document.querySelector(".box").hasAttribute("style")

// get attribute used to get the HTML inside the attribute 
document.querySelector(".box").getAttribute("style")

// set attribute to change the HTML of the attribute
document.querySelector(".box").setAttribute("style","background-color:red;")

// attributes is a property that returns all HTML attributes of an element.
document.querySelector(".box").attributes
/* {
  0: class node,      // index access
  1: style node,      // index access
  class: class node,  // named access
  style: style node,  // named access
  length: 2
}
  Output
element.attributes.class.value   // "box"
element.attributes.style.value   // "color:red"

element.attributes[0].value      // "box" (same as above)

Why this exists
Index: convenient for loops
Name: convenient for direct access

NamedNodeMap
A special DOM collection
Stores attribute nodes
Not an array (but array-like) */
 
// remove attribute to delete 
document.querySelector(".box").removeAttribute("style")

// document.designmode--To change the design of the webpage
document.designMode="on"

// data- is a reserved keyword for programmer to create their own attributes and can be accessed by dataset
document.querySelector(".box").dataset


