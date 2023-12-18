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
    Duration d5(356520);
    CHECK(d5.to_string() == "P4DT3H2M");
}

TEST_CASE("Test member functions for day, hours, minutes, and seconds") {
    Duration d(20000);
    CHECK(d.days() == 0);
    CHECK(d.hours() == 5);
    CHECK(d.minutes() == 33);
    CHECK(d.seconds() == 20);
    Duration d2(356520);
    CHECK(d2.days() == 4);
    CHECK(d2.hours() == 3);
    CHECK(d2.minutes() == 2);
    CHECK(d2.seconds() == 0);
}

TEST_CASE("Test can add Durations with +") {
    Duration d1(35);
    Duration d2(125);
    Duration d3 = d1 + d2;
    CHECK(d3.to_string() == "PT2M40S");
}

TEST_CASE("Test can subtract Durations with -") {
    Duration d1(335);
    Duration d2(205);
    Duration d3 = d1 - d2;
    CHECK(d3.to_string() == "PT2M10S");
}