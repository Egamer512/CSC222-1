#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "banking.h"  // Include the file where your Bank class is defined
#include <doctest.h>

TEST_CASE("Test New User Creation") {
    Bank bank;
    bank.Newuser("Luis", 123, 2000);
    bank.Newuser("Anar", 321, 3000);
    CHECK(bank.user_list.size() == 2);
    CHECK(bank.user_list[0].balance == 2000);
    CHECK(bank.user_list[0].name == "Luis");
    CHECK(bank.user_list[0].code == 123);
    CHECK(bank.user_list[1].balance == 3000);
    CHECK(bank.user_list[1].name == "Anar");
    CHECK(bank.user_list[1].code == 321);

    // Add more checks based on your requirements
}
TEST_CASE("Test Transfer") {
    Bank bank;
    bank.Newuser("Luis", 123, 2000);
    bank.Newuser("Anar", 321, 3000);
    int Amount_to_transfer = 1000;
    bank.Transfer(bank.user_list[0], bank.user_list[1], Amount_to_transfer);
    CHECK(bank.user_list[0].balance == 1000);
    CHECK(bank.user_list[1].balance == 4000);


    // Add more checks based on your requirements
}
TEST_CASE("Test Over_Transfer") {
    Bank bank;
    bank.Newuser("Luis", 123, 2000);
    bank.Newuser("Anar", 321, 3000);
    int Amount_to_transfer = 20000;
    bank.Transfer(bank.user_list[0], bank.user_list[1], Amount_to_transfer);
    CHECK(bank.user_list[0].balance == 2000);
    CHECK(bank.user_list[1].balance == 3000);


    // Add more checks based on your requirements
}
TEST_CASE("Test Withdrawal") {
    Bank bank;
    bank.Newuser("Luis", 123, 2000);
    int Amount_to_withdrawal = 1000;
    bank.Withdrawal(bank.user_list[0], Amount_to_withdrawal);
    CHECK(bank.user_list[0].balance == 1000);
    // Add more checks based on your requirements

}
TEST_CASE("Test Over_Withdrawal") {
    Bank bank;
    bank.Newuser("Luis", 123, 2000);
    int Amount_to_withdrawal = 3000;
    bank.Withdrawal(bank.user_list[0], Amount_to_withdrawal);
    CHECK(bank.user_list[0].balance == 2000);
}
TEST_CASE("Test Deposit"){
    Bank bank;
    bank.Newuser("Luis", 123, 0);
    int Amount_to_deposit = 3000;
    bank.Deposit(bank.user_list[0], Amount_to_deposit);
    CHECK(bank.user_list[0].balance == 3000);
}
TEST_CASE("Test Close Account"){
    Bank bank;
    bank.Newuser("Luis", 123, 3000);
    CHECK(bank.user_list.size() == 1);
    bank.Close_Account(bank.user_list[0]);
    CHECK(bank.user_list.size() == 0);

}
// Add more test cases for other functions as neededS
