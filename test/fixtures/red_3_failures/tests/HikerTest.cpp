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
    LONGS_EQUAL(42, hhg->answer());
}

TEST(Hiker, the_answer_is_even)
{
    CHECK(hhg->answer() % 2 == 0);
}

TEST(Hiker, the_answer_is_two_digits_long)
{
    CHECK(hhg->answer() >= 10 && hhg->answer() < 100);
}
