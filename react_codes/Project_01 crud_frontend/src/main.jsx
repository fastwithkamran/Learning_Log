import { StrictMode } from "react";
import { createRoot } from "react-dom/client";
import {
  Route,
  createBrowserRouter,
  createRoutesFromElements,
  RouterProvider,
} from "react-router";

import "./index.css";
import App from "./App.jsx";

import { Post } from "./components";
import { Get } from "./components";
import { Patch } from "./components";
import { Delete } from "./components";

const router = createBrowserRouter(
  createRoutesFromElements(
    <Route path="/" element={<App />}>
      <Route path="/" element={<Get />} />
      <Route path="/post" element={<Post />} />
      <Route path="/patch" element={<Patch />} />
      <Route path="/delete" element={<Delete />} />
    </Route>,
  ),
);

createRoot(document.getElementById("root")).render(
  <StrictMode>
    <RouterProvider router={router} />
  </StrictMode>,
);
