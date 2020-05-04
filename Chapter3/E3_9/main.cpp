#include <iostream>
#include <string>
#include <cmath>

using namespace std;
string get_direction_by_angle(double angle)
{
    string direction{""};
    const double detal = 10E-6;
    angle = fmod(angle, 360.0);
    if (abs(angle - 0.00) <= detal) {
        direction = "N";
    } else if ((angle - 0.00) > detal && (90.00 - angle) > detal) {
        direction = "NE";
    } else if ((angle - 90.00) >= 0 && (angle - 90.00) <= detal) {
        direction = "E";
    } else if ((angle - 90.00) > detal && (180.00 - angle) > detal) {
        direction = "SE";
    } else if ((angle - 180.00) >= 0 && (angle - 180.00) <= detal) {
        direction = "S";
    } else if ((angle - 180.00) >= 0 && ( 270.00 - angle) > detal) {
        direction = "SW";
    } else if ((angle - 270.00) >= 0 && (angle - 270.00) <= detal) {
        direction = "W";
    } else if ((angle - 270.00) >= 0 && (360.00 - angle) >= detal) {
        direction = "NW";
    }
    return direction;
}
int main(int argc, char **argv) {
    cout << "Please input the angle value:";
    double angle{0.0};
    cin >> angle;

    if (angle < 0) {
        cout << "The value of angle must be large or equal than 0" << endl;
        return -1;
    }

    cout << "angle 0.00 direction is:" << get_direction_by_angle(0.00) << endl;
    cout << "angle 90.00 direction is: " << get_direction_by_angle(90.00) << endl;
    cout << "angle 180.00 direction is: " << get_direction_by_angle(180.00) << endl;
    cout << "angle 270.00 direction is: " << get_direction_by_angle(270.00) << endl;
    cout << "angle 360.00 direction is: " << get_direction_by_angle(360.00) << endl;
    cout << "angle 45.00 direction is: " << get_direction_by_angle(45.00) << endl;
    cout << "angle 135.00 direction is: " << get_direction_by_angle(135.00) << endl;
    cout << "angle 225.00 direction is: " << get_direction_by_angle(225.00) << endl;
    cout << "angle 315.00 direction is: " << get_direction_by_angle(315.00) << endl;
}
