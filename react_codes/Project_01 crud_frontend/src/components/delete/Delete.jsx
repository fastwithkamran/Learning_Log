import { useForm } from "react-hook-form";

function Delete() {
  const { register, handleSubmit } = useForm();

  const onSubmit = async (data) => {
    const { id } = data;
    try {
      const response = await fetch(`https://crudbackend-psi.vercel.app/users/${id}`, {
        method: "DELETE",
        headers: {
          "Content-Type": "application/json",
        },
      });

      const result = await response.json();
      if (response.ok) {
        alert(result.msg);
      }
      else{
        alert(result.msg);
      }
    } catch (error) {
      console.error("Error deleting data:", error);
      alert("API Error")
    }
  };

  return (
    <>
      <div className="container bg-gray-200 p-5 rounded-lg shadow-md max-w-md mx-auto mt-10">
        <form onSubmit={handleSubmit(onSubmit)} className="flex flex-col">
          <label className="text-gray-700 font-bold mb-2">Id:</label>
          <input
            className="border border-gray-300 rounded-md p-2 w-full mb-4"
            type="text"
            {...register("id")}
            placeholder="Enter Your Id"
          />
          <button
            type="submit"
            className="bg-blue-500 text-white p-2 rounded-md hover:bg-blue-600"
          >
            Delete
          </button>
        </form>
      </div>
    </>
  );
}

export default Delete;
