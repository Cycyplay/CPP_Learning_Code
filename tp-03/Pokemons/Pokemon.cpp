#include "Pokemon.h"

#include <string>

Pokemon::Pokemon(const std::string& name)
    : _name { name }
{}

std::string Pokemon::name() const
{
    return _name;
}