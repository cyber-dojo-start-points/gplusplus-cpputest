// A second test file, added beside HikerTest.cpp, holding the only failing
// test in the run. TEST_SRC_DIRS = tests gathers it without being told, so the
// failure it reports is proof the file was compiled: a file the build never
// saw could not turn the light red.
#include "Hiker.hpp"
#include "CppUTest/TestHarness.h"

TEST_GROUP(AnswerSize)
{
};

TEST(AnswerSize, the_answer_is_three_digits_long)
{
    Hiker hhg;
    CHECK(hhg.answer() > 99 && hhg.answer() < 1000);
}
