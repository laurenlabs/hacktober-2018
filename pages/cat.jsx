import React from 'react'
import Page from '../components/Page'
import Image from '../components/Image'
import API from '../service/apis'

class Cat extends React.Component {
  constructor(props) {
    super(props)

    this.state = {
      src: '',
    }
  }

  componentDidMount() {
    API.getCats(cat => {
      this.setState({
        src: cat[0].url
      })
    })
  }

  render() {
    const { src } = this.state
    return <Page>
      <Image src={src} alt="cat"/>
    </Page>
  }
}

export default Cat