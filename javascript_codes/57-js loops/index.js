let a = 0;

for (let i = 0; i < 10; i++) {
    console.log(a + i);
}

let object = {
    name: "Kamran",
    class: "FASTIAN"
}

// forin loop
// for (const key in object) {
//     if (!Object.hasOwn(object, key)) continue;

//     const element = object[key];
//     console.log(element)

// }

for (const key in object) {
   console.log(key)
}

// forof
for (const name of "Kamran") { //count the chaacters of the word and stored it in name like the array of characters
    console.log(name) //printing name on each index number
}