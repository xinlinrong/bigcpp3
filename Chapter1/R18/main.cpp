#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv) {
    double origin = 0.0;
    double a = 0.0;
    double g = 0.0;
    double delta = 0.000001;
    
    cin >> origin;

    if (origin < 0) {
        cout << "origin valuse can not be lower than 0";
    }

    a = origin;
    g = a/2;
    g = (g + a/g)/2;

    while (abs(g - a/g) > delta) {
        g = (g + a/g)/2;
        cout << "current g is " << g << " delta is " << abs(g-a/g) << endl;
    }

    cout << "value g is " << g << endl;

    return 0;
}
