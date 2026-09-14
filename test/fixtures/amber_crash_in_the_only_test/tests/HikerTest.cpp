// CppUTest names a test only when it fails, so a crash that kills the process
// leaves no trace of how far the run got. The test announces itself on stderr
// instead, which is unbuffered and so survives the signal. The announcement is
// printed, the dereference of nullptr takes the process down, and no summary
// line is ever written for the rag-lambda to read.
#include "Hiker.hpp"
#include "CppUTest/TestHarness.h"
#include <cstdio>

TEST_GROUP(Hiker)
{
    Hiker * hhg;

    void setup()
    {
        hhg = new Hiker();
    }
    void teardown()
    {
        delete hhg;
    }
};

TEST(Hiker, Life_the_universe_and_everything)
{
    std::fprintf(stderr, "starting a test\n");
    LONGS_EQUAL(42, hhg->answer());
}
