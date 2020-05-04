#include <iostream>

using namespace std;
int main(int argc, char **argv) {
    int input_integer{0};
    cout << "Please input your integer:";
    cin >> input_integer;
    if (input_integer > 0) {
        cout << "Positive";
    } else if (input_integer < 0) {
        cout << "Nagative";
    } else {
        cout << "Zero";
    }
    cout << endl;
    return 0;
}
