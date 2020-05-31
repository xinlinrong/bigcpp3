#include <iostream>
#include <string>

using namespace std;

const double voltage_s{20};
const double factor_k {0.5};
const double voltage_min{12};
const double voltage_max{18};
const double omega_r0{100};
const double omega_rs{75};

int main(int argc, char **argv)
{
    cout << "Please enter voltage m(12~18):";
    double voltage_m{0};    
    cin >> voltage_m;
    if (cin.fail()) {
        cout << "voltage m is not available" << endl;
        return -1;
    } else if (voltage_m < 12 || voltage_m > 18) {
        cout << "voltage m value is between 12 and 18" << endl;
        return -1;
    }

    double temp = (omega_rs/factor_k) * (voltage_m/(voltage_s - voltage_m)) - (omega_r0/factor_k);
    cout << "temperature is " << temp << endl;
    return 0;
}