#include <iostream>
#include <string>
#include <stdexcept>

#include "account.hpp"

using namespace std;
using namespace bigcpp::chapter1;

void Account::log_account(const string &log_type, double amount, double balance)
{
  cout << " account type: " << log_type;
  cout << " account balance change:" <<  amount;
  cout << " account balance is:" << balance <<endl;
}

void Account::save(int month)
{
  // check month value
  if (month < 0) {
    throw invalid_argument("month must be large or equal than 0");
  }

  double change_amount = (this->balance * this->annual_interest_rate)/12;
  this->balance += change_amount;
  this->log_account("interest", change_amount, this->balance);
  return;
}
