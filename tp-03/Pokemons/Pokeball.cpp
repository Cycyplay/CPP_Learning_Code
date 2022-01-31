#include "Pokeball.h"

bool Pokeball::empty() const
{
    return poke == nullptr;
}

void Pokeball::store(const std::unique_ptr<Pokemon>& pokemon)
{
    poke = std::make_unique<Pokemon>(*pokemon);
}

Pokemon& Pokeball::pokemon()
{
    return *poke;
}