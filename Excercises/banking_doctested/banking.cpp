//Made by Luis Garces and Anar Khuderchuluun 
//banking system

#include "banking.h"

int num_options = 7;
bool keep = true;

User::User(string n,int c, int b){
    name = n;
    code = c;
    balance = b;
}

Bank::Bank(){
   while (keep){
    printbank();
    options();
   }
   cout << " -- BANK CLOSED -- " << endl;
}
//Display bank
void Bank::printbank(){
    int var = 0;
    cout <<" -- Your_ConfidenceBank123 -- "<< endl;
    cout << "1" << "\t" << "New User" << endl;
    cout << "2" << "\t" << "Withdrawal" << endl;
    cout << "3" << "\t" << "Deposit" << endl;
    cout << "4" << "\t" << "Transfer" << endl;
    cout << "5" << "\t" << "Close Account" << endl;

    cout << num_options << "\t" << "Exit" << endl;
    cout << "choose an option from 1-" << num_options << endl;
}
//check what options the user wants
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
    if (choose == 4){
        Transfer();
    }
    if (choose == 5){
        Close_Account();
    }
    if (choose == num_options){
        Exit();
    }
    cout << "\n" << endl;
}
//1. Generate a new user for the bank
void Bank::Newuser(){
    string name;
    int code, balance;
    User_input(name, code);
    cout << "Initial Balance: ";
    cin >> balance;
    User user(name, code, balance);
    user_list.push_back(user); 
}
//2. Withdrawal money from a user account
void Bank::Withdrawal(){
    int v_index = get_user_indx();
    if (v_index >= 0){
        int withdraw_amount;
        cout << "Total Balance: " << user_list[v_index].balance << endl;
        cout << "Amount to Withdraw: ";
        cin >> withdraw_amount;
        if (withdraw_amount < user_list[v_index].balance){
            user_list[v_index].balance -= withdraw_amount;
            cout << "Actual Total Balance: " << user_list[v_index].balance << endl;
        }
        else{
            cout << "Not enough balance" << endl;
        }
    }
}
void Bank::TWithdrawal(int &ptransfer){
    int v_index = get_user_indx();
    if (v_index >= 0){
        int withdraw_amount;
        cout << "Total Balance: " << user_list[v_index].balance << endl;
        cout << "Amount to Transfer: ";
        cin >> withdraw_amount;
        if (withdraw_amount < user_list[v_index].balance){
            user_list[v_index].balance -= withdraw_amount;
            cout << "Actual Total Balance: " << user_list[v_index].balance << endl;
            ptransfer = withdraw_amount;
        }
        else{
            cout << "Not enough balance" << endl;
        }
    }
}
//3. Deposit money into an user account
void Bank::Deposit(){
    int v_index = get_user_indx();
    if (v_index >= 0){
        int deposit_amount;
        cout << "Total Balance: " << user_list[v_index].balance << endl;
        cout << "Amount to Deposit: ";
        cin >> deposit_amount;
        user_list[v_index].balance += deposit_amount;
        cout << "Actual Total Balance: " << user_list[v_index].balance << endl;
    } 
}
void Bank::TDeposit(int deposit_amount){
    int v_index = get_user_indx();
    if (v_index >= 0){
        user_list[v_index].balance += deposit_amount;
        cout << "Actual Total Balance: " << user_list[v_index].balance << endl;
    } 
}
//4. Transfer money from account to account
void Bank::Transfer(){
    int transfer;
    TWithdrawal(transfer);
    TDeposit(transfer);
}
//5. Delete a user
void Bank::Close_Account(){
    int v_index = get_user_indx();
    if (v_index >= 0){
        user_list.erase(user_list.begin() + v_index);
    }
}
//6. End the "Bank interface"
void Bank::Exit(){
    keep = false;
}
//Get a user index in user_list vector
int Bank::get_user_indx(){
    string name;
    int code;
    User_input(name, code);
    int vec_size = user_list.size();
    for(int i = 0; i < vec_size; i++){
        if (user_list[i].name == name && user_list[i].code == code){
            cout << "User Found " << endl;
            return i;
        }
    }
    cout << "User not Found" << endl;
    return -1;
}
//Get user name & code
void Bank::User_input(string& name, int& code){
    cout << "Name: ";
    cin >> name;
    cout << "Code: ";
    cin >> code;
    code = check_code(code);
}
//Check if code is a 3 digit int
int Bank::check_code(int code){
    while ((!cin.good()) || int(log10(code)) != 2){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        cout << "\nInvalid Value (3 digit int)" << endl;
        cout << "Code: ";
        cin >> code;
    }
    return code;
}

int main (void){
    Bank bank;
    return 0;
}