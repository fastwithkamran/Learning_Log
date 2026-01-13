let arr=[1,43,6,76,3]

for (let index = 0; index < arr.length; index++) {
    // const element = array[index];
    console.log(arr[index])
}

// The real-world purpose of forEach is to execute side effects. A side effect is when a function changes something outside of itself—like updating a user interface, saving to a database, or sending an analytics event.
arr.forEach((value,index,array)=>{
    console.log(value,index,array)
})

/* 1. The Structure (Labels vs. Positions)
Object: You give every piece of data a name (called a "Key"). In your example, a, b, and c are the labels. You don't care where they sit in the object as long as you know their names.

Array: You give data a position (called an "Index"). The values 1, 2, 3 are automatically assigned positions 0, 1, 2.

2. How you access the data
Object (Lookup by Name): You ask for it by name.

obj.a or obj['a'] returns 1.

Array (Lookup by Position): You ask for it by its "seat number."

arr[0] returns 1.

3. The "Industry" Purpose
In a real project, you choose between them based on intent:

Use an Object to describe a single Entity.

Example: A user profile. user = { name: "Alice", age: 25, email: "a@web.com" }. You want to call user.email, not user[2].

Use an Array to store a Collection of similar things.

Example: A list of users. users = [user1, user2, user3]. You want to loop through them or sort them. */

let obj={
    a:1,
    b:2,
    c:3
}

// forin loop is used for objects
for (const key in obj) {
    if (!Object.hasOwn(obj, key)) continue; //It means that if object has inherited an element then not display it.
    
    const element = obj[key];
    console.log(key,element)   
}

// forof loop is used for arrays
for (const element of arr) {
    console.log(element)
}
