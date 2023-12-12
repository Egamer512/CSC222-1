/*
   Test class to implement ISO 8601 Durations
*/
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include "Duration.h"

TEST_CASE("Test can create and render a Duration") {
    Duration d;
    CHECK(d.to_string() == "PT0S");
    Duration d2(42);
    CHECK(d2.to_string() == "PT42S");
    Duration d3(200);
    CHECK(d3.to_string() == "PT3M20S");
    Duration d4(20000);
    CHECK(d4.to_string() == "PT5H33M20S");
}

TEST_CASE("Test can add Durations with +") {
    Duration d1(35);
    Duration d2(125);
    Duration d3 = d1 + d2;
    CHECK(d3.to_string() == "PT2M40S");
}