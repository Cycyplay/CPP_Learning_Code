#include "MinuteHand.h"

#pragma once

class SecondHand
{
public:
    SecondHand(MinuteHand&);

    int  get_seconds() const { return _seconds; };
    void advance();

private:
    MinuteHand& _min_hand;
    int         _seconds = 0;
};
