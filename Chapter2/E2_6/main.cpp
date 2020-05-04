#include <iostream>

using namespace std;

const double MILE_TO_METERS = 1609.344;
const double FOOT_TO_METERS = 0.3048;
const double INCH_TO_METERS = 0.0254;

int main(int argc, char **argv) {
    cout << "Please input a number of meter value:";
    double input_number_of_meter;
    cin >> input_number_of_meter;

    cout << input_number_of_meter << " meter transfer to " << (input_number_of_meter / MILE_TO_METERS) << "miles" << endl;
    cout << input_number_of_meter << " meter transfer to " << (input_number_of_meter / FOOT_TO_METERS) << "foot" << endl;
    cout << input_number_of_meter << " meter transfer to " << (input_number_of_meter / INCH_TO_METERS) << "inches" << endl;
    return 0;
}
