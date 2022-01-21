#include "Clock.h"

#include <ostream>

Clock::Clock()
    : _min_hand()
    , _sec_hand { _min_hand }
{}

void Clock::tick()
{
    _sec_hand.advance();
    std::vector<int> tmp;
    for (int i = 0; i < (int)_events.size(); i++)
    {
        if (_events[i].notify_time(_min_hand.get_minutes(), _sec_hand.get_seconds()))
        {
            tmp.emplace_back(i);
        }
    }

    for (int i = tmp.size() - 1; i >= 0; i--)
    {
        _events.erase(_events.begin() + i);
    }
}

void Clock::add_event(const Event& event)
{
    _events.emplace_back(event);
}

std::ostream& operator<<(std::ostream& stream, const Clock& clock)
{
    return stream << clock._min_hand.get_minutes() << " min " << clock._sec_hand.get_seconds() << " sec";
}
