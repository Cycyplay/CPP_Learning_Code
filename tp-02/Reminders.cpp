#include "Clock.h"
#include "Parsing.h"

#include <chrono>
#include <thread>

// You can call the program with the following command in order to queue 3 events at 2s, 1m3s and 10m :
// tp2-reminders.exe "0:2 This is the first reminder" "1:3 This is the second one" "10:0 And the last"

int main(int argc, char** argv)
{
    const auto events = parse_events(argc, argv);
    Clock      c;

    for (auto event : events)
    {
        c.add_event(event);
    }

    const auto program_duration = 22;
    for (int i = 0; i < program_duration; ++i)
    {
        c.tick();
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}
