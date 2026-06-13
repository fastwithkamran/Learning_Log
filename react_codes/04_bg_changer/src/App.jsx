import { useState } from 'react'

function App() {

  const [color, setColor] = useState("olive")
  return (
    <>
      <div className="w-full h-screen duration-200" style={{ backgroundColor: color }}>
        <div className="fixed flex flex-wrap justify-center bottom-12 px-2 inset-x-0 gap-3">
          <button onClick={() => setColor("red")} className='outline-none px-5 w-0.4 rounded-full text-white' style={{ backgroundColor: "red" }}>Red</button>
          <button onClick={() => setColor("orange")} className='outline-none px-5 w-0.4 rounded-full text-white' style={{ backgroundColor: "orange" }}>Orange</button>
          <button onClick={() => setColor("green")} className='outline-none px-5 w-0.4 rounded-full text-white' style={{ backgroundColor: "green" }}>Green</button>
          <button onClick={() => setColor("blue")} className='outline-none px-5 w-0.4 rounded-full text-white' style={{ backgroundColor: "blue" }}>Blue</button>
        </div>
      </div>
    </>
  )
}

export default App
