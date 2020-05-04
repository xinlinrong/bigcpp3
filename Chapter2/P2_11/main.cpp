#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char **argv) {
    const double T0{85.0};
    const double R0{1075};
    const double Beta{3969};

    double R{0.0};
    cout << "Please input R value:";
    cin >> R;

    double T = (Beta * T0)/(T0 * log(R/R0) + Beta) - 273;
    cout << "T is: " << T << endl;
    return 0;
}
