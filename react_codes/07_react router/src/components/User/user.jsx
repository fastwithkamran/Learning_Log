import { useParams } from "react-router";

function User() {
  const { id } = useParams();
  return <div className="text-white text-3xl flex justify-center bg-gray-600 ">User: {id}</div>;
}

export default User;
