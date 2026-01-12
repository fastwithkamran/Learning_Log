document.body.childNodes
document.body.childNodes[1].childNodes
NodeList(11) [text, div.box, text, div.box, text, div.box, text, div.box, text, div.box, text]
let cont= document.body.childNodes[1]
cont.lastChild
cont.lastElementChild
cont.firstElementChild
cont.lastChild.parentElement

alert(document.documentElement.parentElement);
alert(document.documentElement.parentNode);
/* The DOM Tree Hierarchy
In a standard HTML document, the hierarchy looks like this:

Document (The root of the entire tree)

<html> (The documentElement)

<head> and <body> (Children of <html>)

Breaking Down the Code
1. alert(document.documentElement.parentNode); // document
document.documentElement refers specifically to the <html> tag.

The parentNode property looks for any kind of node that sits above it.

Since the <html> tag is inside the overall document, it returns the document object.

2. alert(document.documentElement.parentElement); // null
The parentElement property is more strict; it only looks for a parent that is an HTML Element (like a <div>, <body>, or <html>).

Because the document object is a "Document Node" and not an "HTML Element," the search fails and returns null. */

/* 1. The "Boss" Analogy (Window vs. Document)
Window (The CEO/Owner): This is the "Boss" of the entire browser tab. It handles things like the URL (location), the size of the window, and alerts.

Document (The Factory Manager): The Boss (window) hires a Manager (document) to look after the actual building (the HTML).

The Building (<html>): This is the physical structure.

2. Why parentNode sees the "Boss," but parentElement does not
This is the most important part of your question. In JavaScript, "Node" and "Element" have different "security clearances":

parentNode (The "Is there anyone above me?" check)
When the <html> tag looks up and asks for its parentNode, it is asking: "Who is responsible for my existence?"

The document (Manager) is the one who holds the <html> tag.

Even though the document isn't a "brick and mortar" HTML tag, it is still a Node in the system.

Result: It returns the document.

parentElement (The "Is there a physical floor above me?" check)
When the <html> tag asks for its parentElement, it is specifically asking: "Is there another HTML tag wrapped around me?"

Since <html> is the very first tag in your code, there is no other tag above it.

The document is a "logical" manager, not a "physical" HTML tag.

Result: It returns null because there is no "Boss tag" (Element) above it.

3. The Vice-Versa (Window)
If you try to go even higher:

document.parentNode will return null. Why? Because the document is the "top" of the node tree.

Even though the window (CEO) is "bigger" than the document, the window is not part of the DOM tree. It is the environment the tree lives in.*/