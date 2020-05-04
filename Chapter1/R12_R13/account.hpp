#ifndef _account_hpp_
#define _account_hpp_ 1

#include <string>
using namespace std;

namespace bigcpp {
namespace chapter1 {
    class Account
    {
    private:
      double balance = 0.0;
      double annual_interest_rate = 0.0;
      void log_account(const string &log_type, double amount, double balance);

    public:
      Account(double amount, double annual_interest_rate): balance(amount), annual_interest_rate(annual_interest_rate) {}

      Account(const Account &account) = delete;
      
      Account(Account &&account) = delete;
      
      inline void deposit(double amount) {this->balance += amount; this->log_account("deposit", amount, this->balance);}
      
      inline void withdraw(double amount) {this->balance -= amount; this->log_account("withdraw", -1.0 * amount, this->balance);};

      void save(int month);

      double get_balance() {return this->balance;}
    };
}
// namespace
}
// namespace

#endif