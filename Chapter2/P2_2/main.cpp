#include <iostream>
#include <iomanip>
#include "triangle.hpp"

using namespace std;
using namespace bigcpp::chapter2;

int main(int argc, char **argv) {
    Triangle triangle{{-1, 0}, {0, 1}, {1, 0}};
    if (!triangle.check_if_valid()) {
        cout << "triangle is not a available triangle" << endl;
        return -1;
    }

    cout << "line ab is: " << setw(4) << setprecision(4) << triangle.get_long_of_ab() << endl;
    cout << "line bc is: " << setw(4) << setprecision(4) << triangle.get_long_of_bc() << endl;
    cout << "line ac is: " << setw(4) << setprecision(4) << triangle.get_long_of_ac() << endl;

    cout << "angle abc is: " << setw(4) << setprecision(4) << triangle.get_angle_abc() << endl;
    cout << "angle bac is: " << setw(4) << setprecision(4) << triangle.get_angle_bac() << endl;
    cout << "angle acb is: " << setw(4) << setprecision(4) << triangle.get_angle_acb() << endl;

    cout << "primeter is: " << setw(4) << setprecision(4) << triangle.get_primeter() << endl;

    cout << "area is:"  << setw(4) << setprecision(4) << triangle.get_area() << endl;
    return 0;
}
