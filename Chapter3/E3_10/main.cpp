#include <iostream>
#include <cmath>
#include <string>

using namespace std;
string get_water_status(double cvalue, char unit)
{
    double cfactor = (5.0 / 9);
    double value{0.00};
    if (unit == 'F' || unit == 'f') {
        value = (cvalue - 32.0) * cfactor;
    } else {
        value = cvalue;
    }

    if (value < 0) {
        return "solid";
    } else if (value >=0 && value < 100.00) {
        return "liquid";
    } else {
        return "gas";
    }
}

int main(int argc, char **argv) {
    cout << "Please input temperature value:";
    double value{0.00};
    cin >> value;

    cout << "Please input temperature unit: (c|C|f|F)";
    char unit;
    cin >> unit;

    if (cin.fail()) {
        cout << "Temperature or unit is not available" << endl;
        return -1;
    }

    if (unit != 'c' && unit != 'C' && unit != 'F' && unit != 'f') {
        cout << "Temperature unit is not available" << endl;
        return -1;
    }

    cout << "Water in temperature " << value << "^" << unit << " is " << get_water_status(value, unit) << endl;
    cout << "Water in temperature " << 100 << "^c" << " is " << get_water_status(100, 'c') << endl;
    cout << "Water in temperature " << -10 << "^c" << " is " << get_water_status(-10, 'c') << endl;
    cout << "Water in temperature " << 99 << "^c" << " is " << get_water_status(99, 'c') << endl;
    cout << "Water in temperature " << 0 << "^F" << " is " << get_water_status(0, 'F') << endl;
    cout << "Water in temperature " << 82 << "^F" << " is " << get_water_status(82, 'F') << endl;
    cout << "Water in temperature " << 212 << "^F" << " is " << get_water_status(212, 'F') << endl;
    return 0;
}
