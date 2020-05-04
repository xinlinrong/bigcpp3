#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char **argv) {
    const double pi = 3.1415926;
    double c_min{0}, c_max{0};
    double f_hz {0}, l {0};

    cout << "Please input  f value:";
    cin >> f_hz;

    cout << "Please input Cmin:";
    cin >> c_min;

    cout << "Please input Cmax:";
    cin >> c_max;

    double c_avg = sqrt(c_min * c_max);
    l = 1 / (pow(2*pi, 2) * c_avg * pow(f_hz, 2));

    cout << "L value is " << l << endl;

    double f_min {0}, f_max{0};
    f_min = 1 / (2 * pi * sqrt(l * c_max));
    f_max = 1 / (2 * pi * sqrt(l * c_min));
    cout << "Min hz is " << f_min << endl;
    cout << "Max hz is " << f_max << endl;
    return 0;
}
