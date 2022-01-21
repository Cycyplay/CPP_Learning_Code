#include "Histogram.h"

int main()
{
    Histogram   h;
    std::string in;

    while (true)
    {
        std::cin >> in;
        if (in == "QUIT")
        {
            break;
        }

        h.analyze(in);
    }

    h.print();

    Histogram l(h);
    while (true)
    {
        std::cin >> in;
        if (in == "QUIT")
        {
            break;
        }

        l.analyze(in);
    }

    l.print();
    h.print();

    Histogram h1, h2;
    Histogram h3 { Histogram { h1 } };

    return 0;
}