#include <iostream>
#include <string>
#include <cmath>

using namespace std;

const double temp_t0 ={40.0};
const double omega_r0{33192.0};
const double omega_r2{156300};
const double omega_r3{156300};
const double omega_r4{156300};
const double refactor_B{3301};

int main(int argc, char ** argv)
{
    cout << "Please enter temperature F:";
    double temp_cur{0};
    cin >> temp_cur;
    if (cin.fail()) {
        cout << "Temperature F is not available" << endl;
        return -1;
    } else if (temp_cur == 0) {
        cout << "Temperature F can not be zero" << endl;
    }

    double omega_R{omega_r0};
    double omega_R_efvalue = refactor_B * ((1.0/temp_cur) - (1/temp_t0));
    omega_R *= exp(omega_R_efvalue);
    cout << "omega_R_efvalue value is " << omega_R_efvalue << endl;
    cout << "omega_R value is " << omega_R << endl;

    double exp_left  = omega_r2/(omega_R + omega_r2);
    double exp_right = omega_r4/(omega_r3 + omega_r4);
    cout << "exp_left value is " << exp_left << endl;
    cout << "exp_right value is " << exp_right << endl;
    if (exp_left < exp_right) {
        cout << "bee, temperature is exception" << endl;
    } else {
        cout << "nothing happend" << endl;
    }
    return 0;
}