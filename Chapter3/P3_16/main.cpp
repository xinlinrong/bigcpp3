#include <iostream>
#include <string>
#include <stdexcept>

#include "account.hpp"

using namespace std;
using namespace chapter3::account;

// 获取交易类型
string do_get_trade_type()
{
    string trade_type{};
    while(true) {
        // 输入交易类型
        cout << "Please input trade type(deposit|withdraw|transfer|print|exit):";
        cin >>  trade_type;

        if (trade_type == "exit") {
            break;
        } else if (! (trade_type == "deposit" || trade_type == "withdraw" || trade_type == "transfer" || trade_type == "print")) {// 不属于指定的操作
            cout << "unknown trade type, please input again" << endl;
            continue;
        } else {
            break;
        }
    }
    return trade_type;
}

// 获取交易帐号
string do_get_trade_account()
{
    string account_type{};
    while(true) {
        cout << "Please input trade account(checking_account:ca|deposit_account:da):";
        cin >> account_type;
        if (!(account_type == "ca" ||  account_type == "da")) {
            cout << "account type is not satisfied" << endl;
            continue;
        } else {
            break;
        }
    }
    return account_type;
}

int main(int argc, char **argv)
{
    double trade_amount{0.00};
    string account_type{}, trade_type{};

    double balance{0.00};
    cout << "Please initial checking account balance:";
    cin >>balance;
    checking_account ca{};
    ca.set_balance(balance);

    cout << "Please initial deposit account balance:";
    cin >> balance;
    deposit_account da{};
    da.set_balance(balance);

    base_bank_account *bac = nullptr;

    // 循环执行
    while (true) {
        // 输入交易类型 
        trade_type = do_get_trade_type();
        if (trade_type == "exit") {
            cout << "trade exit" << endl;
            break;
        }
        account_type =  do_get_trade_account();
        if (account_type == "ca") {
            bac = &ca;
        } else if (account_type == "da") {
            bac = &da;
        }
        if (trade_type != "print") {
            cout << "Please input trade amount:";
            cin >> trade_amount;
        }
        try {
            if (trade_type == "deposit") {
                bac->do_deposit(trade_amount);
                cout << "account " << account_type << " balance is " << bac->get_balance() << endl;
            } else if (trade_type == "withdraw") {
                bac->do_withdraw(trade_amount);
                cout << "account " << account_type << " balance is " << bac->get_balance() << endl;
            } else if (trade_type == "print") {
                cout << "account " << account_type << " balance is " << bac->get_balance() << endl;
            } else if (trade_type == "transfer") {
                if (account_type == "ca") {
                    bank_transfer_center::transfer(ca, da, trade_amount);
                } else if (account_type == "da") {
                    bank_transfer_center::transfer(da, ca, trade_amount);
                }
                cout << "account ca " << " balance is " << ca.get_balance() << endl;
                cout << "account da " << " balance is " << da.get_balance() << endl;
            }
        } catch (exception &e) {
            cout << "catch operation exception" << endl;
        }
    }

    return 0;
}