import React from 'react';

import Api from '../service/apis';

class RandomUsers extends React.Component {

    constructor(props) {
        super(props);

        this.state = {
            users: []
        }
    }

    componentWillMount() {
        Api.getRandomUsers(user => {
            this.setState({
                users: user
            });
        });
    }

    render() {

        const { users } = this.state;
        
        return (

            <div className="contentCards">
                <h2>List of Random Users</h2>
                {Object.keys(users).map((index) => {
                    console.log(users[index].login.username)
                    return (
                        <div className="contentCards__card" key={users[index].login.username}>
                            <img src={users[index].picture.medium} className="card__image" alt=""/>
                            <h2 className="card__name">
                                {users[index].name.first}
                            </h2>
                            <div className="card__description">
                                <p>
                                    <strong>Login: </strong>
                                    {users[index].login.username}
                                </p>
                            </div>
                        </div>

                    );
                })}

            </div>
        )

    }
}

export default RandomUsers;