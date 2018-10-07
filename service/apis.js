
const axios = require('axios');

const urlRandomUsers = 'https://randomuser.me/api/';

const getRandomUsers = (callback) => {
    axios.get(`${urlRandomUsers}/?results=10`, {
        headers: {'Content-Type': 'application/json'}
    }).then((res) => callback(res.data.results))
    .catch( (err) => callback({error: err}))
}


module.exports = {
    getRandomUsers
}