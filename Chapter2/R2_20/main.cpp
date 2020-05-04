#include <iostream>

using namespace std;

int main() {
    int total;
    cout << "Please enter a number:";
    double x1;
    cin >> x1;
    total = total + x1;
    cout << "Please enter a number:";
    double x2;
    cin >>x2;
    total = total + x2;
    cout << "total: " << total << endl;
    total = total / 2;
    cout << "total: " << total << endl;
    cout << "The average is " << total << endl;
    return 0;
}
