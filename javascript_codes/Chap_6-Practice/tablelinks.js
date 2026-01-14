// Using JS for Table Manipulation

// Access table by its ID
let table = document.getElementById("MyTable")

// Accessing or Selecting rows and cells
let rows = table.rows
console.log(rows)
let firstRowCells = rows[0].cells
console.log(firstRowCells)

// Iterating over cells to access the data
for (let i = 0; i < rows.length; i++) {
    let cells = rows[i].cells;
    for (let j = 0; j < cells.length; j++) {
        console.log(cells[j].innerText);
    }
}

// Updating the cell
table.rows[1].cells[1].innerText="Engineer 1"

// Adding new Row and a new cell 
let newrow=table.insertRow(-1)
let newcell=newrow.insertCell(0)
newcell.innerHTML="Pakistan";

// Deleting row
table.deleteRow(0)

// Responding to User Interaction
// By using Event Listener property

table.addEventListener("click",(event)=>{
    event.target.style.backgroundColor="purple"
})