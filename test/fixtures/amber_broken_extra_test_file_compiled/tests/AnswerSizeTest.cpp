// A second test file that does not compile, and nothing includes it. It still
// stops the build. The makefile gathers its test sources by directory,
// TEST_SRC_DIRS = tests , so every .cpp dropped in there is handed to the
// compiler whether anything needs it or not. HikerTest.cpp on its own would
// have been green.
#include "Hiker.hpp"
#include "CppUTest/TestHarness.h"

TEST_GROUP(AnswerSize)
{
};

TEST(AnswerSize, the_answer_is_two_digits_long)
{
    Hiker hhg;
    CHECK(hhg.answer() > 9 && hhg.answer() < 100)
}
