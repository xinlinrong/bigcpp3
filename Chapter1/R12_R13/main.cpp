#include <iostream>

#include "account.hpp"

using namespace std;
using namespace bigcpp::chapter1;

int main(int argc, char **argv) {
    int months = 0;
    double annual_interest_rate = 0.0;
    double initial_account_balance = 0.0;
    double withdraw_per_month = 0.0;

    cout << "please input annual interest rate:";
    cin >> annual_interest_rate;
    
    cout << "please input initial account balance:";
    cin >> initial_account_balance;

    cout << "please input withdraw amount per month:";
    cin >> withdraw_per_month;

    if ((annual_interest_rate * initial_account_balance)/12 > withdraw_per_month) {
        cout << "program will run forever, we end it here" << endl;
        return 0;
    }

    Account account {initial_account_balance, annual_interest_rate};
    while(account.get_balance() > withdraw_per_month) {
        account.save(1);
        account.withdraw(withdraw_per_month);
        ++ months;
    }
    cout << "total months is " << (months + 1) << endl;
    return 0;
}
