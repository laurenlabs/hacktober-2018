import React from 'react';

import Api from '../service/apis';

class RandomUsers extends React.Component {

    contentCards = {
        backgroundColor: '#eee',
        padding: '10px',
        width: '50vw',
        fontFamily: 'Arial'
    }

    card = {
        backgroundColor: '#82A0BC',
        color: '#FFF',
        padding: '5px',
        margin: '5px',
        display: 'flex',
        flexDirection: 'column',
        alignItems: 'center',
        justifyContent: 'center',
    }

    cardDescription = {
        backgroundColor: '#82A0BC',
        color: '#FFF',
        padding: '5px',
    }

    cardName = {
        textTransform: 'capitalize'
    }

    cardImage = {
        borderRadius: '100%',
    }

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

            <div style={this.contentCards}>
                <h2>List of Random Users</h2>
                {Object.keys(users).map((index) => {
                    console.log(users[index].login.username)
                    return (
                        <div style={this.card} key={users[index].login.username}>
                            <img src={users[index].picture.medium} style={this.cardImage} alt=""/>
                            <h2 style={this.cardName}>
                                {users[index].name.first}
                            </h2>
                            <div style={this.cardDescription}>
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