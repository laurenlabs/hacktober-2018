import React from 'react'
import PropTypes from 'prop-types'

const style = {
  width: '100%',
}

const Button = ({ onclick, children, type = 'button', className }) =>
  <button
    className={`button ${className}`}
    type={type}
    style={style}
    onClick={onclick}>
    {children}
  </button>

Button.propTypes = {
  onclick: PropTypes.func,
  type: PropTypes.string,
  children: PropTypes.any,
  className: PropTypes.string,
}

export default Button
