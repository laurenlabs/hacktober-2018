import React from 'react';
import Link from 'next/link';

const Header = () => (
  <div>
    <Link href="/">
      <a style={{ marginRight: '20px' }}>Home</a>
    </Link>
    <Link href="/random-users">
      <a style={{ marginRight: '20px' }}>API - Random Users</a>
    </Link>
  </div>
);

export default Header;
