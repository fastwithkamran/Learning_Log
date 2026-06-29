import { useForm } from "react-hook-form";

function Post() {
  const { register, handleSubmit } = useForm();

  const onSubmit = async (data) => {
    try {
      const response = await fetch(`https://crudbackend-psi.vercel.app/users`, {
        method: "POST",
        headers: {
          "Content-Type": "application/json",
        },
        body: JSON.stringify(data),
      });

      const result = await response.json();

      if (response.ok) {  
        alert(result.msg);
      }
      else{
        alert(result.msg);  
      }
    } catch (error) {
      console.error("Error submitting data:", error);
      alert("API Error");
    }
  };

  return (
    <>
      <div className="container bg-gray-200 p-5 rounded-lg shadow-md max-w-md mx-auto mt-10">
        <form onSubmit={handleSubmit(onSubmit)} className="flex flex-col">
          <label className="text-gray-700 font-bold mb-2">First Name:</label>
          <input
            className="border border-gray-300 rounded-md p-2 w-full mb-4"
            type="text"
            {...register("first_name")}
            placeholder="Enter Your First Name"
          />
          <label className="text-gray-700 font-bold mb-2">Last Name:</label>
          <input
            className="border border-gray-300 rounded-md p-2 w-full mb-4"
            type="text"
            {...register("last_name")}
            placeholder="Enter Your Last Name"
          />
          <label className="text-gray-700 font-bold mb-2">Email:</label>
          <input
            className="border border-gray-300 rounded-md p-2 w-full mb-4"
            type="email"
            {...register("email")}
            placeholder="Enter Your Email Address"
          />
          <button
            type="submit"
            className="bg-blue-500 text-white p-2 rounded-md hover:bg-blue-600"
          >
            Create
          </button>
        </form>
      </div>
    </>
  );
}

export default Post;
