#pragma once

#include "Phone.h"

#include <iostream>

class HomePhone : public Phone
{
public:
    HomePhone(const Person& person)
        : Phone { person }
    {}

    HomePhone(const Person& person, int position)
        : Phone { person }
        , _position { position }
    {}

    void ring() const override
    {
        if (_owner.get_position() != _position)
        {
            std::cout << "This is the voicemail of " << _owner.get_name() << ". Please leave a message."
                      << std::endl;
        }
        else
        {
            _owner.answer_phone();
        }
    }

private:
    int _position = 0;
};