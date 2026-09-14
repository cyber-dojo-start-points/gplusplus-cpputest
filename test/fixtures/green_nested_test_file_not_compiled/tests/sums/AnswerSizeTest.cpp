// A second test file one directory deeper than tests/. The makefile gathers
// its test sources from the directories in TEST_SRC_DIRS and does not walk into
// their subdirectories, so tests/sums/ is never looked in. The test below would
// fail if it ran; the light is green, which is what says it never did.
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
