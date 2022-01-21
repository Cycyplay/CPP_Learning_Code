#include "Histogram.h"

Histogram::Histogram()
    : _count(26)
{}

Histogram::Histogram(const Histogram& other)
    : _count(other._count)
{
    std::cout << "Copie !" << std::endl;
}

void Histogram::analyze(const std::string& str)
{
    for (char c : str)
    {
        if (c >= 'a' && c <= 'z')
        {
            _count[c - 'a']++;
        }
    }
}

void Histogram::print() const
{
    for (int i = 0; i < (int)_count.size(); i++)
    {
        std::cout << (char)('a' + i) << " : " << _count[i] << std::endl;
    }
}