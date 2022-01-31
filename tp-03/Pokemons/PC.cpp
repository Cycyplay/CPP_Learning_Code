#include "PC.h"

const std::vector<std::unique_ptr<Pokemon>>& PC::pokemons() const
{
    return _pokemons;
}

void PC::receive(const std::unique_ptr<Pokemon>& pokemon)
{
    _pokemons.emplace_back(std::make_unique<Pokemon>(*pokemon));
}