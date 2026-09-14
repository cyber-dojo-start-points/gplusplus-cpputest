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
    LONGS_EQUAL(42, hhg->answer())
}
