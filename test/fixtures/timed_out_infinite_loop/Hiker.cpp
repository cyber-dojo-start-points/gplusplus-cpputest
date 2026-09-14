// A loop that never ends. The runner stops the whole run at max_seconds, so no
// summary line is ever printed and the outcome is timed_out rather than any of
// the three colours. The counter keeps the optimiser from removing the loop.
#include "Hiker.hpp"

Hiker::Hiker()
{
}

Hiker::~Hiker()
{
}

int Hiker::answer() const
{
    volatile int hikers = 0;
    while (true)
    {
        hikers = hikers + 1;
    }
    return 42;
}
