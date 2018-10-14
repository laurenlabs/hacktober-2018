import React, { Component } from 'react';
import Api from '../service/apis';

export default class Quote extends Component {
    constructor() {
        super();
        this.state = {
            quote: {
                author: '',
                body: '',
                url: ''
            },
            error: ''
        };
    }

    async componentDidMount() {
        const { error, quote } = await Api.getDailyQuote();

        this.setState({
            quote,
            error
        });
    }

    render() {
        const { error, quote } = this.state;
        return (
            <section className="quote__main">
                { quote.url &&
                    <blockquote className="quote__blockquote" cite={quote.url}>{quote.body}</blockquote> }
                <p className="quote__author">- <em>{quote.author}</em></p>
            { error &&
                <p>An error has occurred and might be related to free access consult of API. Please wait 20 seconds :D</p> }
            </section>
        )
    }
}