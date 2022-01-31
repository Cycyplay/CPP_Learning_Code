#pragma once
#include "Pokemon.h"

#include <memory>

// A ball where Pokemon sleep.
class Pokeball
{
public:
    bool empty() const;

    void store(const std::unique_ptr<Pokemon>&);

    Pokemon& pokemon();

private:
    std::unique_ptr<Pokemon> poke;
};