#pragma once
#include "PC.h"
#include "Pokeball.h"

#include <memory>
#include <string>
#include <vector>

// A person that capture Pokemons and make them fight.
class Trainer
{
public:
    Trainer(std::string, PC&);

    const std::string name() const;

    const std::array<Pokeball, 6>& pokeballs() const;

private:
    std::string             _name;
    PC&                     _pc;
    std::array<Pokeball, 6> _pokeballs;
};
