#include "banking.h"

int num_options = 7;
bool keep = true;

User::User(string n,int c, int b){
    name = n;
    code = c;
    balance = b;
}


// Bank::Bank(){
//    while (keep){
//     printbank();
//     options();
//    }
//    cout << " -- BANK CLOSED -- " << endl;
// }
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
// void Bank::options(){
//     int choose;
//     cin >> choose;
//     while (!(cin.good()) || choose > num_options || choose < 1){
//         cin.clear();
//         cin.ignore(numeric_limits<streamsize>::max(), '\n');
//         cout << "choose an option from 1-" << num_options << endl;
//         cin >> choose;
//     }
//     if (choose == 1){
//         Newuser();
//     }
//     if (choose == 2 ){
//         Withdrawal();
//     }
//     if (choose == 3){
//         Deposit();
//     }
//     if (choose == 4){
//         Transfer();
//     }
//     if (choose == 5){
//         Close_Account();
//     }
//     if (choose == num_options){
//         Exit();
//     }
//     cout << "\n" << endl;
// }
//1. Generate a new user for the bank
void Bank::Newuser(string name, int code, int balance){
    // string name;
    // int code, balance;
    // User_input(name, code);
    // cout << "Initial Balance: ";
    // cin >> balance;
    User user(name, code, balance);
    user_list.push_back(user); 
}
//2. Withdrawal money from a user account
void Bank::Withdrawal(User user, int &amount_to_withdraw){
    int v_index = get_user_indx(user.name, user.code);
    if (v_index >= 0){
        if (amount_to_withdraw < user_list[v_index].balance){
            user_list[v_index].balance -= amount_to_withdraw;
        }
        else{
            amount_to_withdraw = 0;
        }
    }
}
//3. Deposit money into an user account
void Bank::Deposit(User user, int amount_to_deposit){
    int v_index = get_user_indx(user.name, user.code);
    if (v_index >= 0){
        user_list[v_index].balance += amount_to_deposit;
    } 
}

//4. Transfer money from account to account
void Bank::Transfer(User giver, User taker, int transfer_amount){
    Withdrawal(giver, transfer_amount);
    Deposit(taker, transfer_amount);
}
//5. Delete a user
void Bank::Close_Account(User account_to_close){
    int v_index = get_user_indx(account_to_close.name, account_to_close.code);
    if (v_index >= 0){
        user_list.erase(user_list.begin() + v_index);
    }
}
//6. End the "Bank interface"
void Bank::Exit(){
    keep = false;
}
//Get a user index in user_list vector
int Bank::get_user_indx(string name, int code){
    int vec_size = user_list.size();
    for(int i = 0; i < vec_size; i++){
        if (user_list[i].name == name && user_list[i].code == code){
            return i;
        }
    }
    return -1;
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

// int main (void){
//     Bank bank;
//     return 0;
// }