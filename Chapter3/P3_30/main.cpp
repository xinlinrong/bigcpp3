#include <iostream>
#include <cmath>

using namespace std;

const double v_G{6.67e-11};
const double v_M{1.3e22};
const double v_R{1.153e6};
const double v_mile{1609.0};

int main(int argc, char **argv)
{
    cout << "Please enter escape speed(miles/h):";
    double escape_speed{0};
    cin >> escape_speed;
    if (cin.fail()) {
        cout << "Escape speed is unavailable." << endl;
        return -1;
    } else if (escape_speed < 0 || escape_speed > 3.0e8) {
        cout << "Escape speed is invalid" << endl;
        return -1;
    }

    escape_speed = escape_speed * 1609.0;
    double hr_espace_speed{0};
    hr_espace_speed = sqrt(2 * v_G * v_M / v_R);
    cout << "HR escape speed is " << (hr_espace_speed / v_mile) << " miles/h." << endl;
    if (escape_speed > hr_espace_speed) {
        double real_M = (pow(escape_speed, 2) * v_R) / (2 * v_G);
        cout << "Escape speed is  fast than " <<  (hr_espace_speed / v_mile) << " miles/h" << endl;
        cout << "It won't land on earch." << endl;
        cout << "It need more " << (real_M - v_M) << " Unit mass for object to land on earth" << endl;
    } else {
        cout << "Escape speed is slow than " <<  (hr_espace_speed / v_mile)  << " miles/h." << endl; 
        cout << "it will land on earth." << endl;
    }
    return 0;
}