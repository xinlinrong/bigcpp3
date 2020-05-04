#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv) {
    double x = 2.5;
    double y = -1.5;
    int m = 18;
    int n = 4;

    cout << "x+n*y-(x+n)*y" << (x+n*y-(x+n)*y) << endl;
    cout << "m/n + m%n" << (m/n + m % n) << endl;
    cout << "5*x - n/5" << (5*x -n/5) << endl;
    cout << "1-(1-(1-(1-(1-n))))" << 1-(1-(1-(1-(1-n)))) << endl;;
    cout << "sqrt(stqrt(n))" << sqrt(sqrt(n)) << endl;
    return 0;
}
