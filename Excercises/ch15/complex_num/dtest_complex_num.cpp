#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "complex_num_class.h"
#include <doctest.h>
TEST_CASE("Test division") {
    Complex c1(10,10);
    Complex c2(10,10);
    Complex a = c1 / c2;
    CHECK(a.str_cartesian() == "1.000000+0.000000i");

}
// TEST_CASE("Test multiplication") {
//     Complex c1(10,10);
//     Complex c2(10,10);
//     Complex a = c1 * c2;
//     CHECK(a.str_cartesian() == "0.000000+200.000000i");

// }