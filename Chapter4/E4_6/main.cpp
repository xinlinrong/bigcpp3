#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    bool first = true;
    double input, min;
    cout << "Please input number:" << endl;
    while (true) {
        cin >> input;
        if (cin.fail()) {
            break;
        } else {
            if (first) {
                min = first;
                first = false;
            } else if (input < min) {
                min = input;
            }
        }
    }
    cout << "Result of min is " << min << endl;
    return 0;
}