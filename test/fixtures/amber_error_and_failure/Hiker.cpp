// checksum() is declared in Hiker.hpp and called from the tests, but nothing
// defines it, so the test binary never links. The 6 * 9 below is a failure
// waiting to be reported, and the link error above it means no test ever runs
// to report it.
#include "Hiker.hpp"

Hiker::Hiker()
{
}

Hiker::~Hiker()
{
}

int Hiker::answer() const
{
    return 6 * 9;
}
