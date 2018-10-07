import React from 'react';
import Link from 'next/link';

const style = {
  backgroundColor: '#2c80b9',
  height: '68px',
  display: 'flex',
  alignItems: 'center',
  paddingLeft: '20px',
  fontFamily: 'Arial'
}

const styleLink = {
  marginRight: '20px',
  color: '#FFF',
  textDecoration: 'none',
  padding: '10px',
  borderRight: '1px solid #FFF'
}

const Header = () => (
  <div style={style}>
    <Link href="/">
      <a style={styleLink}>Home</a>
    </Link>
    <Link href="/random-users">
      <a style={styleLink}>API - Random Users</a>
    </Link>
  </div>
);

export default Header;
