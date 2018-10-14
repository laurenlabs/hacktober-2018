import React from 'react'
import PropTypes from 'prop-types'

const style = {
  width: '500px',
  height: '300px',
}

const Image = ({ src, alt, className = '' }) => 
  <img src={src} alt={alt} style={style} className={`image ${className}`}/>

Image.propTypes = {
  src: PropTypes.string.isRequired,
  alt: PropTypes.string.isRequired,
  className: PropTypes.string,
}

export default Image