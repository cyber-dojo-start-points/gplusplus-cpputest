// A learner's print left in a passing test. It goes to stderr, which the
// runner keeps as a separate stream from stdout, and the rag-lambda reads both
// joined together. The summary line and the debug line arrive on different
// streams and the light is still green.
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
    std::fprintf(stderr, "debug: the answer is %d\n", hhg->answer());
    LONGS_EQUAL(42, hhg->answer());
}
