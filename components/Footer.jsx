import React from 'react';

const style = {
  fontFamily: 'Arial',
  position: 'fixed',
  right: 0,
  bottom: 0,
  left: 0,
  padding: '1rem',
  backgroundColor: '#efefef',
  textAlign: 'center'
}

const Footer = () => (
  <div style={style}>
    <p>This is the footer.</p>
  </div>
);

export default Footer;
