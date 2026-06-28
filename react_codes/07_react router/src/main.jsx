import { StrictMode } from "react";
import { createRoot } from "react-dom/client";
import {
  Route,
  createBrowserRouter,
  createRoutesFromElements,
  RouterProvider,
} from "react-router"; // Add router imports
import "./index.css";
import App from "./App.jsx";

import Home from "./components/Home/home.jsx";
import About from "./components/About/about.jsx";
import Contact from "./components/Contact/contact.jsx";
import User from "./components/User/user.jsx";
import GitHub from "./components/GitHub/github.jsx";
import { githubInfoLoader } from "./components/GitHub/githubloader.jsx";

const router = createBrowserRouter(
  createRoutesFromElements(
    <Route path="/" element={<App />}>
      <Route index element={<Home />} />
      <Route path="about" element={<About />} />
      <Route path="contact" element={<Contact />} />
      <Route path="user/:id" element={<User />} />
      <Route path="github" element={<GitHub />} loader={githubInfoLoader} />
    </Route>,
  ),
);

createRoot(document.getElementById("root")).render(
  <StrictMode>
  <RouterProvider router = {router} />
  </StrictMode>,
);
