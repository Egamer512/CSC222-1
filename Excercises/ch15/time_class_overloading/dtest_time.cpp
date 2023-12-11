#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "time.h"
#include <doctest.h>

TEST_CASE("Test string"){
    Time t(20,50,30);
    CHECK(t.to_string() == "20:50:30");
    Time t2(500,90,60);
    CHECK(t2.to_string() == "501:31:00");
}

TEST_CASE("operator +="){
    Time t(1,0,5);
    Time t2(0,1,100);
    t += t2; 
    CHECK(t.to_string() == "1:02:45");
}
TEST_CASE("operator +"){
    Time t(1,0,5);
    Time t2(0,1,100);
    t = t + t2; 
    CHECK(t.to_string() == "1:02:45");
}
TEST_CASE("operator -"){
    Time t(100,30,20);
    Time t2(5,0,10);
    t = t - t2; 
    CHECK(t.to_string() == "95:30:10");
}