import Card from './components/Card'
function App() {

  let myArr=[1,2,3]

  let myObj={
    name:"Kamran",
    age:19
  }

  return (
    <>
      <h1 className="bg-green-400 p-4 rounded mb-4">Hello World</h1>
      <Card username="fastwithkamran"  />
      <Card username="superflash"  />
    </>
  )
}

export default App
