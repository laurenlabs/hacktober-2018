import React from 'react';
import Link from 'next/link';

const style = {
  backgroundColor: '#2c80b9',
  height: '68px',
  display: 'flex',
  alignItems: 'center',
  paddingLeft: '20px'
};

const styleLink = {
  marginRight: '20px',
  color: '#FFF',
  textDecoration: 'none',
  padding: '10px',
  fontFamily: 'Arial'
  // borderRight: '1px solid #FFF'
};

const Header = () => (
  <div style={style}>
    <Link href="/">
      <a style={styleLink}>Home</a>
    </Link>
    <Link href="/random-users">
      <a style={styleLink}>API - Random Users</a>
    </Link>
    <Link href="/pokemon">
      <a style={styleLink}>Pokemon</a>
    </Link>
    <Link href="https://hacktoberfest.digitalocean.com/">
      <a style={styleLink}>Hacktoberfest</a>
    </Link>
    <Link href="/Hacktoberfest">
      <a style={styleLink}>Hacktoberfest 2k18</a>
    </Link>
    <Link href="/">
      <a style={styleLink}>About</a>
    </Link>
    <Link href="/">
      <a style={styleLink}>Spectacular</a>
    </Link>
  </div>
);

export default Header;
