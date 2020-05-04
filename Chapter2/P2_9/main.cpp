#include <iostream>
using namespace  std;

int main(int argc, char **argv) {
    double r1{0.0}, r2{0.0}, r3{0.0};
    cout << "Please input r1 value: ";
    cin >> r1;
    cout << "Please input r2 value: ";
    cin >> r2;
    cout << "Please input r2 value: ";
    cin >> r3;

    double r_total = r1 + (r1 * r2)/(r1 + r2);
    cout << "total ohm is " << r_total;
    return 0;
}
