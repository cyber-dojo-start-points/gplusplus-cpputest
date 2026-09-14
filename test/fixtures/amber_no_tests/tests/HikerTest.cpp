// A test file holding a TEST_GROUP but no TEST at all. AllTests.cpp still
// calls RUN_ALL_TESTS, and CppUTest refuses to call a run that measured
// nothing a pass: it reports "Errors (ran nothing, 0 tests, ...)", which
// matches neither arm of the rag-lambda, so the light is amber.
#include "Hiker.hpp"
#include "CppUTest/TestHarness.h"

TEST_GROUP(Hiker)
{
};
