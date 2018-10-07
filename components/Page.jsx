import React from 'react';
import PropTypes from 'prop-types';
import Footer from './Footer';
import Header from './Header';
import '../styles/main.scss';

const Page = ({ children }) => (
  <div id="main">
    <Header />
    {children}
    <Footer />
  </div>
);

Page.propTypes = {
  children: PropTypes.node.isRequired
};

export default Page;
