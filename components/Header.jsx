import React from 'react';
import Link from 'next/link';

const Header = () => (
  <div id="header">
    <Link href="/">
      <a>Home</a>
    </Link>
    <Link href="/">
      <a>About</a>
    </Link>
    <Link href="/">
      <a>Spectacular</a>
    </Link>
  </div>
);

export default Header;
