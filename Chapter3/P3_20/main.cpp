#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    double purchase{0.00};
    double discount_rate{0.00};

    cout << "Please enter the cost of your groceries:";
    cin >> purchase;
    if (cin.fail()) {
        cout << "The parameter purchase you enter is invalid." << endl;
        return -1;
    } else if (purchase < 0) {
        cout << "Value of parameter must be greater or equal than 0" << endl;
        return -1;
    }

    if (purchase < 0) {
        discount_rate = 0;
    } else if (purchase >= 10 && purchase < 60) {
        discount_rate = 8;
    } else if (purchase >= 60 && purchase < 150) {
        discount_rate = 10;
    } else if (purchase >= 150 && purchase < 210) {
        discount_rate = 12;
    } else if (purchase >= 210) {
        discount_rate = 14;
    }

    if (discount_rate == 0) {
        cout << "no discount coupon win." << endl;
    } else {
        cout << "You win a discount coupon of $" << (discount_rate * purchase / 100.0) << "(" <<  discount_rate << "% of your purchase)" << endl;
    }
    return 0;
}