#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char **argv) {
    const double R_val{10.00};
    const double P_val {260.0};
    const double Vt_val{120.0};
    
    double pf_val{0.00};
    double Vs_val{0.00};

    cout << "Please input pf value: ";
    cin >> pf_val;

    Vs_val += pow(Vt_val + (2 * R_val * P_val/Vt_val), 2);
    cout << "Vs_val is: " << Vs_val << endl;
    Vs_val += pow((2 * R_val * P_val)/(pf_val * Vt_val), 2) * pow(1 - pf_val, 2);
    cout << "Vs_val is: " << Vs_val << endl;
    Vs_val = sqrt(Vs_val);

    cout << "Vs_val is: " << Vs_val << endl;
    return 0;
}
