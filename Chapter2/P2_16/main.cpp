#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char **argv) {
    const double pi{3.1415926};
    int angle{0};
    double output{0};

    cout << "Please inpu angle:";
    cin >> angle;

    output = pi * (angle % 360) / 180.0;
    cout << "output is " << output << endl;
    return 0;
}
