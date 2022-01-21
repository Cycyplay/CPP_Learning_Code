#include "MinuteHand.h"

void MinuteHand::advance()
{
    _minutes = (_minutes + 1) % 60;
}