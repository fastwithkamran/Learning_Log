// Using HashMap creates a server-side storage container for sessions
const sessionIdToUserMap = new Map();

// Saves user data linked to a specific session ID
function setUser(id, user){
    sessionIdToUserMap.set(id,user)
}

// Get user data using a session ID
function getUser(id){
   return sessionIdToUserMap.get(id)
}

module.exports = {
    setUser,
    getUser
}