#include "SecondHand.h"

SecondHand::SecondHand(MinuteHand& minuteHand)
    : _min_hand { minuteHand }
{}

void SecondHand::advance()
{
    _seconds = (_seconds + 1) % 60;
    if (_seconds == 0)
    {
        _min_hand.advance();
    }
}