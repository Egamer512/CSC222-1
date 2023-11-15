#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "banking.h"  // Include the file where your Bank class is defined
#include <doctest.h>

TEST_CASE("Test New User Creation") {
    Bank bank;
    bank.Newuser();
    CHECK(bank.user_list.size() == 1);
    // Add more checks based on your requirements
}
// Add more test cases for other functions as neededS
