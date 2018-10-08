import React from 'react'

const Pokemon = ({pokemons}) => {
  if (pokemons) {
    return (
      <div key={Math.random()} style={{ display: 'flex', flexDirection: 'column' }}>
        <img style={{ width: 200, height: 200 }} src={pokemons.sprites.front_default} />
        <h1>{pokemons.name.toUpperCase()}</h1>
        <p>TYPE</p>
        <div style={{ display: 'flex' }}>
          {
            pokemons.types.map(type => {
              return <p key={Math.random()} style={{ paddingRight: 10 }}>{type.type.name}</p>
            })
          }
        </div>
      </div>
    )
  }
  return null
}

export default Pokemon
