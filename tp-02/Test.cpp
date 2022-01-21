#include "Clock.h"
#include "MinuteHand.h"
#include "SecondHand.h"

#include <iostream>

int main()
{
    // MinuteHand m, m2;

    // for (int i = 0; i < 120; i++)
    // {
    //     if (i % 2)
    //     {
    //         m.advance();
    //     }
    //     m2.advance();

    //     std::cout << m.get_minutes() << " & " << m2.get_minutes() << std::endl;
    // }

    // MinuteHand m3;
    // SecondHand s { m3 };

    // for (int i = 0; i < 120; i++)
    // {
    //     s.advance();
    //     std::cout << m3.get_minutes() << ":" << s.get_seconds() << std::endl;
    // }

    Clock c;

    for (int i = 0; i < 63; i++)
    {
        c.tick();
    }

    std::cout << c << std::endl;

    return 0;
}