import { useState, useCallback, useEffect, useRef } from 'react'

function App() {

  const [length, setLength] = useState(8)
  const [numberAllowed, setNumberAllowed] = useState(false)
  const [charAllowed, setCharAllowed] = useState(false)
  const [password, setPassword] = useState("")
  const passwordRef = useRef(null)

  const copyPasstoClipboard = useCallback(() => {
    passwordRef.current?.select()
    // passwordRef.current?.setSelectionRange(0,3) 
    window.navigator.clipboard.writeText(password)
  }, [password])

  const passwordGenerator = useCallback(() => {
    let pass = ""
    let str = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
    if (numberAllowed) str += "1234567890"
    if (charAllowed) str += "$#%^{}@[]"

    for (let i = 1; i <= length; i++) {
      let char = Math.floor(Math.random() * str.length);
      pass += str[char]
    }

    setPassword(pass)

  }, [length, numberAllowed, charAllowed])

  useEffect(() => {
    passwordGenerator()
  }, [length, numberAllowed, charAllowed, passwordGenerator])

  return (
    <>
      <div className='mx-auto my-5 w-full max-w-lg px-5 pt-4 pb-10 rounded-4xl bg-gray-600'>
        <p className='text-center bg-gray-900 text-3xl rounded-4xl py-3 text-amber-50'>Password Generator</p>

        <div className='flex mb-4 mt-2 bg-amber-50 overflow-hidden w-full rounded-3xl text-black'>
          <input
            type="text"
            value={password}
            className="outline-none w-full py-1 px-3"
            placeholder='password'
            readOnly
            ref={passwordRef}
          />
          <button onClick={copyPasstoClipboard} className='bg-blue-500 w-20 cursor-pointer text-white shrink-0'>Copy</button>
        </div>

        <div className='flex'>
          <div className='bg-amber-600 w-65 rounded-2xl px-5 py-1 flex'>
            <input type="range"
              min={6}
              max={16}
              value={length}
              className='cursor-pointer'
              onChange={(e) => { setLength(Number(e.target.value)) }}
            />

            <label className='ml-6 text-sm'>Length: {length}</label>
          </div>

          <div className='flex items-center ml-5'>
            <input
              type="checkbox"
              className='ml-3'
              checked={numberAllowed}
              onChange={() => { setNumberAllowed((prev) => !prev) }}
            />

            <label className='ml-1 text-sm text-amber-50'>Number</label>
          </div>

          <div className='flex items-center ml-5'>
            <input
              type="checkbox"
              className='ml-3'
              checked={charAllowed}
              onChange={() => setCharAllowed((prev) => !prev)}
            />

            <label className='ml-1 text-sm text-amber-50'>Characters</label>
          </div>

        </div>
      </div>
    </>
  )
}

export default App
