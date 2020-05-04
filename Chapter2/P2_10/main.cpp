#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv) {
    const double const_val_a{17.27};
    const double const_val_b{237.7};

    double rate_val{0.0};
    double temp_val{0.0};

    cout << "Please input rate_val:";
    cin >> rate_val;
    cout << "Please input temp_val:";
    cin >> temp_val;

    double ftrh_val = (const_val_a * temp_val)/(const_val_b + temp_val) + log(rate_val);
    cout << "f(T, RH) value is: " << ftrh_val << endl;
    double td_val = (const_val_b * ftrh_val)/(const_val_a - ftrh_val);
    cout << "Td value is: " << td_val << endl;
    return 0;
}
