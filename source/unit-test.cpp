#include "rs-unit-test.hpp"

int main(int argc, char** argv) {

    // Call begin_tests() at the start of your main() function. If any command
    // line arguments are passed, these are interpreted as regular
    // expressions, and only tests whose names match one of the expressions
    // will be run.

    RS::UnitTest::begin_tests(argc, argv);

    // Call individual test functions using the UNIT_TEST() macro. The
    // argument is the name of the test function, minus the "test_" prefix.

    UNIT_TEST(example) // runs test_example()

    // Call end_tests() at the end of your main() function.

    return RS::UnitTest::end_tests();

}
