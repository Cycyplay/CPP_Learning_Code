#pragma once

#include <string>

// A creature that is cute and can fight other ones.
class Pokemon
{
public:
    Pokemon(const std::string&);

    std::string name() const;

private:
    std::string _name;
};
