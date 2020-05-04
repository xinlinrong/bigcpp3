#include <iostream>
#include <cmath>
#include <string>

using namespace std;
string get_water_status(double cvalue, char unit, int height)
{
    double cfactor = (5.0 / 9);
    double value{0.00};
    double gas_temp = 100.0 - (height/300);
    if (unit == 'F') {
        value = (cvalue - 32.0) * cfactor;
    } else {
        value = cvalue;
    }

    if (value < 0) {
        return "solid";
    } else if (value >=0 && value < gas_temp) {
        return "liquid";
    } else {
        return "gas";
    }
}

int main(int argc, char **argv) {
    cout << "Please input height value:";
    double height{0.00};
    cin >> height;

    if (cin.fail()) {
        cout << "Variable height is not available" << endl;
        return -1;
    }
    
    cout << "Please input temperature value:";
    double value{0.00};
    cin >> value;

    if (cin.fail()) {
        cout << "Variable temperature value is not available" << endl;
        return -1;
    }
    
    cout << "Please input temperature unit: (C|F)";
    char unit;
    cin >> unit;

    if (cin.fail()) {
        cout << "Temperature or unit is not available" << endl;
        return -1;
    }

    if (unit != 'C' && unit != 'F') {
        cout << "Temperature unit just use 'C' or 'F'" << endl;
        return -1;
    }

    cout << "Water in temperature " << value << "^" << unit << " is " << get_water_status(value, unit, height) << endl;
    cout << "Water in temperature " << 98 << "^c" << " is " << get_water_status(100, 'c', height) << endl;
    cout << "Water in temperature " << -10 << "^c" << " is " << get_water_status(-10, 'c', height) << endl;
    cout << "Water in temperature " << 99 << "^c" << " is " << get_water_status(99, 'c', height) << endl;
    cout << "Water in temperature " << 0 << "^F" << " is " << get_water_status(0, 'F', height) << endl;
    cout << "Water in temperature " << 82 << "^F" << " is " << get_water_status(82, 'F', height) << endl;
    cout << "Water in temperature " << 212 << "^F" << " is " << get_water_status(212, 'F', height) << endl;
    return 0;
}
