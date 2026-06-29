import { NavLink } from "react-router";

export default function Header() {
  return (
    <nav className="bg-black border-gray-200 px-4 py-3.5">
      <ul className="flex flex-row text-3xl gap-5 justify-center">
        <li>
          <NavLink
            to="/"
            className={({ isActive }) =>
              `${isActive ? "text-orange-400" : "text-emerald-50"} duration-200 border-gray-100 hover:bg-gray-50 hover:text-orange-700`
            }
          >
            Get
          </NavLink>
        </li>
        <li>
          <NavLink
            to="/post"
            className={({ isActive }) =>
              `${isActive ? "text-orange-400" : "text-emerald-50"} duration-200 border-gray-100 hover:bg-gray-50 hover:text-orange-700`
            }
          >
            Post
          </NavLink>
        </li>
        <li>
          <NavLink
            to="/patch"
            className={({ isActive }) =>
              `${isActive ? "text-orange-400" : "text-emerald-50"} duration-200 border-gray-100 hover:bg-gray-50 hover:text-orange-700`
            }
          >
            Patch
          </NavLink>
        </li>
        <li>
          <NavLink
            to="/delete"
            className={({ isActive }) =>
              `${isActive ? "text-orange-400" : "text-emerald-50"} duration-200 border-gray-100 hover:bg-gray-50 hover:text-orange-700`
            }
          >
            Delete
          </NavLink>
        </li>
      </ul>
    </nav>
  );
}
