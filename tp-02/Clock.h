#include "Event.h"
#include "MinuteHand.h"
#include "SecondHand.h"

#include <ostream>
#include <vector>

#pragma once

class Clock
{
public:
    Clock();

    void                 tick();
    void                 add_event(const Event&);
    friend std::ostream& operator<<(std::ostream& stream, const Clock& clock);

private:
    MinuteHand         _min_hand;
    SecondHand         _sec_hand;
    std::vector<Event> _events;
};
