import { Header } from "./components";
import { Outlet } from "react-router";
function App() {
  return (
    <>
      <Header />
      <Outlet />
    </>
  );
}

export default App;
