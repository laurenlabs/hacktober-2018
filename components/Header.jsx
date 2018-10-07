import React from 'react';
import Link from 'next/link';

const Header = () => (
  <div>
    <Link href="/">
      <a>Home</a>
    </Link>
    &nbsp;|&nbsp;
    <Link href="https://hacktoberfest.digitalocean.com/">
      <a>Hacktoberfest</a>
    </Link>
  </div>
);

export default Header;
