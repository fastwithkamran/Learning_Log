// import { useEffect, useState } from "react";
import { useLoaderData } from "react-router";
function Github() {
  const data = useLoaderData();
  // const [data, setData] = useState({});
  // useEffect(() => {
  //   fetch("https://api.github.com/users/fastwithkamran")
  //     .then((response) => response.json())
  //     .then((data) => setData(data));
  // }, []);
  return (
    <>
      <div className="bg-gray-600 flex justify-center">
        <img src={data.avatar_url} alt="GitHub Picture" />
      </div>
      <div className="text-white text-3xl flex justify-center bg-gray-600 ">
        GitHub followers: {data.followers}
      </div>
    </>
  );
}

export default Github;
