// CppUTest names a test only when it fails, so a crash that kills the process
// leaves no trace of how far the run got. Each test announces itself on stderr
// instead, which is unbuffered and so survives the signal. Both tests call the
// method that dereferences nullptr, so whichever CppUTest runs first takes the
// process down with it and exactly one announcement is printed. That count of
// one, against two tests written, is what says a test was left unrun.
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

TEST(Hiker, six_times_nine_is_not_the_answer)
{
    std::fprintf(stderr, "starting a test\n");
    CHECK(hhg->answer() != 54);
}
