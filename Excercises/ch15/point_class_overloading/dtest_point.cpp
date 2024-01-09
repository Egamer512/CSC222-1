
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "Point.h"
#include <doctest.h>

TEST_CASE("test equality (==)"){
    Point p1(2, 2);
    Point p2(2, 2);
    CHECK(p1 == p2);
}

TEST_CASE("test addition (+)"){
    Point p1(1, 1);
    Point p2(2, 2);
    p1 = p1+p2;
    Point answer(3,3);
    CHECK(p1 == answer);
}

TEST_CASE("test multiplication between points (*)"){
    Point p1(2, 1);
    Point p2(3, 4);
    p1 = p1*p2;
    Point answer(6,4);
    CHECK(p1 == answer);
}


TEST_CASE("test substaction (-)"){
    Point p1(2, 1);
    Point p2(3, 4);
    p1 = p2-p1;
    Point answer(1,3);
    CHECK(p1 == answer);
}

TEST_CASE("test multiplication between point and number (*)"){
    Point p1(3, 4);
    p1 = p1*2;
    Point answer(6,8);
    CHECK(p1 == answer);
}

TEST_CASE("test multiplication between number and point (*)"){
    Point p1(3, 4);
    p1 = 2*p1;
    Point answer(6,8);
    CHECK(p1 == answer);
}