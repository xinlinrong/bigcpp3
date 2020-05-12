#include <iostream>
#include <cmath>
#include <string>

using namespace std;

const double tax_rate_level_1 = 0.01;
const double tax_rate_level_2 = 0.02;
const double tax_rate_level_3 = 0.03;
const double tax_rate_level_4 = 0.04;
const double tax_rate_level_5 = 0.05;
const double tax_rate_level_6 = 0.06;

static double calc_tax_amount(double income);

int main(int argc, char **argv) {
    cout << "Please input your income:";
    double income{0.00};
    cin >> income;
    if (cin.fail()) {
        cout << "Calculate tax income failure, please check your input value." << endl;
        return -1;
    }
    if (income < 0) {
        cout << "Calculate tax income failure, income value must greater than 0." << endl;
        return -1;
    }

    double tax_amount = calc_tax_amount(income);
    cout << "Finally your tax is " << tax_amount << endl;
    return 0;
}

static double calc_tax_amount(double income)
{
    double tax_rate = tax_rate_level_1;
    if (income <= 50000) {
        tax_rate = tax_rate_level_1;
    } else if (income > 50000 && income <= 75000) {
        tax_rate = tax_rate_level_2;
    }  else if (income > 75000 && income <= 100000) {
        tax_rate = tax_rate_level_3;
    }  else if (income > 100000 && income <= 250000) {
        tax_rate = tax_rate_level_4;
    }  else if (income > 250000 && income <= 500000) {
        tax_rate = tax_rate_level_5;
    }  else if (income > 500000) {
        tax_rate = tax_rate_level_6;
    }
    return (tax_rate * income);
}