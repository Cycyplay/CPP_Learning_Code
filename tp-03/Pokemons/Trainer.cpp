#include "Trainer.h"

Trainer::Trainer(std::string name, PC& pc)
    : _name { name }
    , _pc { pc }
{}

const std::string Trainer::name() const
{
    return _name;
}

const std::array<Pokeball, 6>& Trainer::pokeballs() const
{
    return _pokeballs;
}
