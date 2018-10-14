import React from 'react'
import PropTypes from 'prop-types'

const style = {
  width: '500px',
  height: '300px',
}

const Image = ({ src, alt }) => 
  <img src={src} alt={alt} style={style}/>

Image.propTypes = {
  src: PropTypes.string.isRequired,
  alt: PropTypes.string.isRequired,
}

export default Image