#include <iostream>
#include <string>
#include <limits> 
#include <vector>
#include <string.h>
#include <cmath>
using namespace std;

struct User{
    string name;
    int code;
    int balance;
    User(string n,int c, int b);
};
struct Bank{
    vector< User > user_list;
    //Bank();
    void Exit();
    void printbank();
    void Newuser(string name, int code, int balance);
    void options();
    void Withdrawal(User user, int &amount_to_withdraw);
    void Deposit(User user, int amount_to_deposit);
    void Transfer(User giver, User taker, int transfer_amount);
    int get_user_indx(string name, int code);
    int check_code(int code);
    void Close_Account(User account_to_close);
    void User_input(string& name, int& code);
    void Print_accounts();
};
