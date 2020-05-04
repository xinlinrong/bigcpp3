#include <iostream>
#include <stdexcept>

using namespace std;

class Balance {
private:
  double amount = 0.0;
public:
    Balance(double amount): amount{amount}{}
    inline void increaseByRate(double interest_rate) {this->amount += interest_rate *  this->amount;};
    inline double getAmount() {return this->amount;};
};

int main(int argc, char **argv) {
    double amount = 0.0;
    double interest_rate = 0.0;
    int save_year = 0;
    
    cout << "Please input balance amount:" ;
    cin >> amount;
    cout << endl;

    if (amount <= 0) {
        throw invalid_argument("Amount must be greater than 0");
    }
    
    cout << "Please input interest rate:" ;
    cin >> interest_rate;
    cout << endl;

    cout << "Please input year you want ro save:";
    cin >> save_year;
    cout << endl;

    if (save_year <= 0) {
        throw invalid_argument("Years  must be greater than 0");
    }

    Balance balance {amount};

    for (auto i = 1; i <= save_year; ++ i) {
        balance.increaseByRate(interest_rate);
        cout << "Form year " << i << "your balance amount is: $" << balance.getAmount() << endl;
    }
    return 0;
}
