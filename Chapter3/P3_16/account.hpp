#ifndef _account_hpp_
#define _account_hpp_ 1

#include <iostream>
#include <string>

namespace chapter3
{
namespace account
{
    // 银行账户抽象类
    class abstract_bank_account
    {
        public:
            // 设置余额
            virtual void set_balance(double amount) = 0;
            // 存入金额
            virtual void do_deposit(double amount) = 0;
            // 取出金额
            virtual void do_withdraw(double amount) = 0;
            // 获取余额
            virtual double get_balance() = 0;
    };

    // 基础银行帐户类
    class base_bank_account: public abstract_bank_account
    {
        private:
            // 余额
            double balance{0.00};

        public:
            // 设置余额
            void set_balance(double amount);
            // 存入金额
            void do_deposit(double amount);
            // 取出金额
            void do_withdraw(double amount);
            // 获取余额
            inline double get_balance() {return this->balance;} 
    };

    // 支票帐户
    class checking_account: public base_bank_account
    {
        private:
            double balance{0.00};
    };

    // 储蓄账户
    class deposit_account: public base_bank_account
    {
        private:
            double balance{0.00};
    };

    // 帐户交易中心
    class bank_transfer_center
    {
        public:
            static void  transfer(base_bank_account &checkout_account, base_bank_account &checkin_account, double check_amount);
    };
}// namespace
}// namespace 

#endif