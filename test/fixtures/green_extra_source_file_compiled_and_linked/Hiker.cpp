#include "Hiker.hpp"
#include "Checksum.hpp"

Hiker::Hiker()
{
}

Hiker::~Hiker()
{
}

int Hiker::answer() const
{
    return 6 * the_checksum_is();
}
