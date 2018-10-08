import React from 'react';
import Api from '../service/apis';

class Weather extends React.Component {
    constructor(props) {
        super(props);

        this.state = {
            weather: {
                name: "",
                temp: 0
            }
        }
    }

    componentWillMount() {
        Api.getWeather(weather => {
            if(weather.name != undefined){
                this.setState({
                    weather: {
                        name: weather.name,
                        temp: weather.main.temp
                    }
                });
            } else {
                this.setState({
                    weather: {
                        name: "Error, Did you set an API key?",
                        temp: ""
                    }
                });
            }
        });
    }

    render() {
        const { weather } = this.state;
        return (

            <div className="contentCards">
                <h2>Look at the weather</h2>
                <p>
                    Name: {weather.name}<br />
                    Temp: {Math.round(weather.temp)}° F
                </p>
            </div>
        )

    }
}

export default Weather;