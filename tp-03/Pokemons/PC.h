#pragma once

#include "Pokemon.h"

#include <memory>
#include <vector>

// A PC is the place where Pokemons get automagically sent when the trainer's pockets are full.
// When a Pokemon is transferred to the PC, this one takes ownership.
class PC
{
public:
    const std::vector<std::unique_ptr<Pokemon>>& pokemons() const;

    void receive(const std::unique_ptr<Pokemon>&);

private:
    std::vector<std::unique_ptr<Pokemon>> _pokemons;
};