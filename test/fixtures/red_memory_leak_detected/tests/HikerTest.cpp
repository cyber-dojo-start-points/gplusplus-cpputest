// CppUTest counts the allocations a test makes and fails the test when one is
// still outstanding at the end of it. This is the axis that separates CppUTest
// from the other frameworks in this family: the single check below passes, and
// the test is reported as a failure all the same, so the light is red because
// of memory the test forgot rather than because of an assertion.
#include "Hiker.hpp"
#include "CppUTest/TestHarness.h"

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
    int * hikers = new int[hhg->answer()];
    LONGS_EQUAL(42, hhg->answer());
    (void)hikers;
}
