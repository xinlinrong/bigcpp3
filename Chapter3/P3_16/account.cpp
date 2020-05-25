#include <iostream>
#include <string>
#include <stdexcept>

#include "account.hpp"

using namespace std;
using namespace chapter3::account;

void bank_transfer_center::transfer(base_bank_account &checkout_account, base_bank_account &checkin_account, double amount)
{
    checkout_account.do_withdraw(amount);
    checkin_account.do_deposit(amount);
}

// 设置余额
void base_bank_account::set_balance(double amount)
{
    if (amount < 0) {
        throw out_of_range("balance amount must be greater than 0");
    }
    this->balance = amount;
}

// 存入金额
void base_bank_account::do_deposit(double amount)
{
    if (amount < 0) {
        throw out_of_range("parameter amount must be greater than 0");
    }
    this->balance += amount;
}

// 取出金额
void base_bank_account::do_withdraw(double amount)
{
    if (this->balance < amount) {
        throw out_of_range("your account has not enough amount to withdraw");
    }
    this->balance -= amount;
}