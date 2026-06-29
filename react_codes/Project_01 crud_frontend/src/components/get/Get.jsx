import { useEffect, useState } from "react";

function Get() {
  const [users, setUsers] = useState([]);

  useEffect(() => {
    const fetchUsers = async () => {
      try {
        const response = await fetch("https://crudbackend-psi.vercel.app/users");
        if (response.ok) {
          const result = await response.json();
          setUsers(result);
        } else {
          const result = await response.json();
          alert(result.msg);
        }
      } catch (error) {
        console.error("Fetch Error", error);
        alert("API Error");
      }
    };

    fetchUsers();
  }, []);

  return (
    <ul className="space-y-3">
      {users.map((user, index) => (
        <li key={user._id}>
          <p>
            <b>User:</b> {index + 1}
          </p>
          <p>
            <b>Id: </b>
            {user._id}
          </p>
          <p>
            <b>Name: </b>
            {user.first_name} {user.last_name}
          </p>
        </li>
      ))}
    </ul>
  );
}

export default Get;
