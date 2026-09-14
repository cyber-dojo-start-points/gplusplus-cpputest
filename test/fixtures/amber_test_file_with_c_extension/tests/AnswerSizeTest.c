// A test file named .c rather than .cpp. The makefile gathers its test sources
// by directory and by extension, and .c is one of the extensions it gathers,
// so this file is handed to the C compiler. A CppUTest TEST_GROUP cannot live
// there: the header it needs is C++, and the build stops before any test runs.
#include "CppUTest/TestHarness.h"

TEST_GROUP(AnswerSize)
{
};
