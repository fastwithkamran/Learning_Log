import { useState } from 'react'

function App() {

  const [counter, setCounter] = useState(0)
  // let counter = 5; Could not update UI

  function addValue() {
    setCounter(counter + 1)
  }
  function decreaseValue() {
    if(counter!=0)
    setCounter(counter - 1)
  }
  return (
    <>
      <h1>Hello World</h1>
      <h2>Counter value {counter}</h2>

      <button onClick={addValue}>Add value</button>
      <br />
      <button onClick={decreaseValue}>Decrease value</button>
    </>
  )
}

export default App
