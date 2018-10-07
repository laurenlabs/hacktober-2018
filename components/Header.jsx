import React from 'react';
import Link from 'next/link';

const Header = () => (
  <div>
    <Link href="/">
      <a>Home</a>
    </Link>
    <Link href="/Hacktoberfest">
      <a style={{ paddingLeft: 10 }}>Hacktoberfest 2k18</a>
    </Link>
  </div>
);

export default Header;
