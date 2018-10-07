import React from 'react';
import Page from '../components/Page';
import fetch from 'isomorphic-unfetch';
import Pokemons from '../components/Pokemon';

const Index = props => {
  return (
    <Page>
      <Pokemons pokemons={props.pokemon} />
    </Page>
  );
};

Index.getInitialProps = async () => {
  const res = await fetch('https://pokeapi.co/api/v2/pokemon/6/');
  const json = await res.json();
  return { pokemon: json };
};

export default Index;
