#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char **argv) {
    int num1{0}, num2{0}, num3{0};
    cout << "input num1 ";
    cin >> num1;
    cout << "input num2 ";
    cin >> num2;
    cout << "input num3 ";
    cin >> num3;

    if ((num2 - num1) > 0 && (num3 - num2) > 0)
    {
        cout << "increasing" << endl;
    } else if ((num2 - num1) < 0 && (num3 - num2) < 0) {
        cout << "decreasing" << endl;
    } else {
        cout << "neither" << endl;        
    }
    return 0;
}
