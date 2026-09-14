// A second test file that is both compiled in its own right and included here.
// TEST_SRC_DIRS = tests already gathers every .cpp in tests/, so the #include
// below hands the compiler a second copy of the same TEST_GROUP and the same
// TEST, and the two objects collide at link time. Dropping the file in was
// enough; including it as well is what breaks the build.
#include "Hiker.hpp"
#include "CppUTest/TestHarness.h"

#include "AnswerSizeTest.cpp"

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
