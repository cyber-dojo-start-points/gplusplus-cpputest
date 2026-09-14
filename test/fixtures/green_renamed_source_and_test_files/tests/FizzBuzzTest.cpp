#include "FizzBuzz.hpp"
#include "CppUTest/TestHarness.h"

TEST_GROUP(FizzBuzz)
{
    FizzBuzz * hhg;

    void setup()
    {
        hhg = new FizzBuzz();
    }
    void teardown()
    {
        delete hhg;
    }
};

TEST(FizzBuzz, Life_the_universe_and_everything)
{
    LONGS_EQUAL(42, hhg->answer());
}
