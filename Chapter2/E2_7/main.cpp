#include <iostream>
#include <cmath>

using namespace std;

const double pi = 3.1415926;

int main(int argc, char **argv) {
    cout << "Please Input the diameter:";
    double diameter{0.0};
    cin >> diameter;

    cout << "The primeter is: " << 2 * pi * diameter << endl;
    cout << "The area is: " << pi * pow(diameter, 2) << endl;
    cout << "The dimesion is: " << 4 * pi * pow(diameter, 3) / 3 << endl;
    cout << "The suface area is:" << 4 * pi * pow(diameter, 2) << endl;
    return 0;
}
