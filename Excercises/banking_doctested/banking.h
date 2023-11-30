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
    Bank();
    void Exit();
    void printbank();
    void Newuser();
    void options();
    void Withdrawal();
    void TWithdrawal(int& ptransfer);
    void Deposit ();
    void TDeposit(int ptransfer);
    void Transfer();
    int get_user_indx ();
    int check_code(int code);
    void Close_Account();
    void User_input(string& name, int& code);
    void Print_accounts();
};