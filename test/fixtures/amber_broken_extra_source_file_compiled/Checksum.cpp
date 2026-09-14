// A second source file that does not compile, and nothing includes it or calls
// it. It still stops the build. The makefile gathers its sources by directory,
// SRC_DIRS = . , so every .cpp beside Hiker.cpp is handed to the compiler
// whether anything needs it or not, and one that will not compile takes the
// whole run amber. Hiker.cpp on its own would have been green.
int the_checksum_is()
{
    return 7
}
