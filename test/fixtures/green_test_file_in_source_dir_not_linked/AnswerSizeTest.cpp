// A second test file put in the top directory rather than in tests/. SRC_DIRS
// gathers it, so it is compiled, but it is compiled into libHiker.a with the
// production code rather than straight into the test runner. Nothing in the
// runner names anything in this object, so the linker never takes it out of
// the archive and the test below is never registered. The test would fail if
// it ran; the light is green, which is what says it never did.
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
