// The learner renamed every file away from the name the exercise shipped with,
// and the build followed. The makefile names no file at all: SRC_DIRS and
// TEST_SRC_DIRS name directories, so whatever .cpp sits in them is compiled
// under whatever name it has. COMPONENT_NAME still says Hiker, so the archive
// and the runner keep their old names, but nothing needs renaming to match.
#include "FizzBuzz.hpp"

FizzBuzz::FizzBuzz()
{
}

FizzBuzz::~FizzBuzz()
{
}

int FizzBuzz::answer() const
{
    return 42;
}
