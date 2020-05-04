#include <iostream>
#include <cmath>

using namespace std;
int main(int argc, char **argv) {
    double val {0.0};
    cout << "Please input value:";
    cin >> val;
    if (val == 0) {
        cout << "zero" << endl;
        return 0;
    }

    if (val > 0) {
        cout << "positive";
    } else {
        cout << "nagative";
    }

    if (abs(val) < 1.0) {
        cout << " small";
    } else if (abs(val) > 1E6) {
        cout << " large";
    }
    cout << endl;
    return 0;
}
