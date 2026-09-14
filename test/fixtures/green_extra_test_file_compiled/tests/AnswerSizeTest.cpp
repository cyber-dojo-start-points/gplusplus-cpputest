// A second test file, added beside HikerTest.cpp and never named anywhere. The
// makefile gathers its test sources by directory, TEST_SRC_DIRS = tests , so
// every .cpp in tests/ is compiled and linked straight into the test runner.
// Nothing has to include it and nothing has to list it: the summary counts two
// tests rather than one, which is what says this file reached the build.
#include "Hiker.hpp"
#include "CppUTest/TestHarness.h"

TEST_GROUP(AnswerSize)
{
};

TEST(AnswerSize, the_answer_is_two_digits_long)
{
    Hiker hhg;
    CHECK(hhg.answer() > 9 && hhg.answer() < 100);
}
