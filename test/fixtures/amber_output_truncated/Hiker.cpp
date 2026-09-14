// The learner put a print inside a loop to see what was happening. It goes to
// stdout, which is the same stream CppUTest writes its summary line to, and it
// prints far more than the 50K the runner keeps. The runner keeps the head of
// each stream, so the flood survives and the summary line that came after it
// does not, leaving the rag-lambda nothing to read.
#include "Hiker.hpp"
#include <cstdio>

Hiker::Hiker()
{
}

Hiker::~Hiker()
{
}

int Hiker::answer() const
{
    int total = 0;
    for (int i = 0; i != 5000; i++)
    {
        std::printf("debug: i is %d, total is %d\n", i, total);
        total += 6;
    }
    return 42;
}
