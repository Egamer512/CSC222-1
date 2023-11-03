#include<iostream>
#include "banking.h"

using namespace std;
int num_options = 8;
bool keep = true;
struct User{
    string name;
    int code;
    int balance;
    User(string n,int c, int b);
};
User::User(string n,int c, int b){
    name = n;
    code = c;
    balance = b;
}

struct Bank{
    vector< User > user_list;
    Bank();
    void printbank();
    void Newuser();
    void options();
    void Withdrawal();
    void Deposit ();
    int compare ();
    
    int check_val(int code);
};

Bank::Bank(){
   while (keep){
    printbank();
    options();
   }
      
}
void Bank::printbank(){
    int var = 0;
    cout <<" -- Your_ConfidenceBank123 -- "<< endl;
    
    cout << "1" << "\t" << "New_User" << endl;
    cout << "2" << "\t" << "Withdrawal" << endl;
    cout << "3" << "\t" << "Deposit" << endl;
    cout << "4" << "\t" << "Transfer" << endl;
    cout << "choose an option from 1-" << num_options << endl;
}
void Bank::options(){
    int choose;
    cin >> choose;
    while (!(cin.good()) || choose > num_options || choose < 1){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "choose an option from 1-" << num_options << endl;
        cin >> choose;
    }
    if (choose == 1){
        Newuser();
    }
    if (choose == 2 ){
        Withdrawal();
    }
    if (choose == 3){
        Deposit();
    }
    cout << "\n" << endl;
}

int Bank::check_val(int code){
    while ((!cin.good()) || int(log10(code)) != 2){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        cout << "\nInvalid Value (3 digit int)" << endl;
        cout << "Code: ";
        cin >> code;
    }
    return code;
}
int Bank::compare (){
    string name;
    int code;
    cout << "Name: ";
    cin >> name;
    cout << "Code: ";
    cin >> code;
    code = check_val(code);
    int vec_size = user_list.size();
    for(int i = 0; i < vec_size; i++){
        if (user_list[i].name == name && user_list[i].code == code){
            
            cout << "user found " << endl;
            return i;
        }
    }
    cout << "user not found" << endl;
    return -1;
    
}

void Bank::Withdrawal(){
    int v_index = compare();
    if (v_index >= 0){
        int withdraw_amount;
        cout << "Total Balance: " << user_list[v_index].balance << endl;
        cout << "Amount to Withdraw: ";
        cin >> withdraw_amount;
        user_list[v_index].balance -= withdraw_amount;
        cout << "Actual Total Balance: " << user_list[v_index].balance << endl;
    }
    
}
void Bank::Deposit(){
    int v_index = compare();
    if (v_index >= 0){
        int deposit_amount;
        cout << "Total Balance: " << user_list[v_index].balance << endl;
        cout << "Amount to Deposit: ";
        cin >> deposit_amount;
        user_list[v_index].balance += deposit_amount;
        cout << "Actual Total Balance: " << user_list[v_index].balance << endl;
    }
    
}
void Bank::Newuser(){
    string name;
    int code, balance;
    cout << "Name: ";
    cin >> name;
    cout << "Code: ";
    cin >> code;
    code = check_val(code);
    cout << "Initial Balance: ";
    cin >> balance;
    User user(name, code, balance);
    user_list.push_back(user); 
}
int main (void){
    Bank bank;
}