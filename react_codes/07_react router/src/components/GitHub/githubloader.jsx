export const githubInfoLoader = async () => {
  const response = await fetch("https://api.github.com/users/fastwithkamran");
  return response.json();
};