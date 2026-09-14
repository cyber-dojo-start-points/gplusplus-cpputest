// A second source file, added beside Hiker.cpp and never named anywhere. The
// makefile gathers its sources by directory, SRC_DIRS = . , so every .cpp in
// the top directory is compiled and archived into libHiker.a. Hiker.cpp calls
// the function below, which is what pulls this object out of the archive at
// link time, and the green light is what says both steps happened.
#include "Checksum.hpp"

int the_checksum_is()
{
    return 7;
}
