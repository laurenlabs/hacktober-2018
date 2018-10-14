import React from 'react';
import Link from 'next/link';

const Header = () => (
  <div className="header">
    <Link href="/">
      <a className="header__item">Home</a>
    </Link>
    <Link href="/random-users">
      <a className="header__item">API - Random Users</a>
    </Link>
    <Link href="/pokemon">
      <a className="header__item">Pokemon</a>
    </Link>
    <Link href="/weather">
      <a className="header__item">Weather</a>
    </Link>
    <Link href="https://hacktoberfest.digitalocean.com/">
      <a className="header__item">Hacktoberfest</a>
    </Link>
    <Link href="/Hacktoberfest">
      <a className="header__item">Hacktoberfest 2k18</a>
    </Link>
    <Link href="/">
      <a className="header__item">About</a>
    </Link>
    <Link href="/">
      <a className="header__item">Spectacular</a>
    </Link>
    <Link href="/cat">
      <a className="header__item">Cat</a>
    </Link>
  </div>
);

export default Header;
