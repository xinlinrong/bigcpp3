#include <iostream>

using namespace std;
int main(int argc, char **argv) {
    int num1{0}, num2{0}, num3{0};
    cout << "please input num1 ";
    cin >> num1;
    cout << "please input num2 ";
    cin >> num2;
    cout << "please input num3 ";
    cin >> num3;

    if (num1 == num2 && num1 == num3) {
        cout << "all the same" << endl;
    } else if (num1 != num2 && num1 != num3 && num2 != num3) {
        cout << "all different" << endl;
    } else {
        cout << "neither" << endl;
    }
    return 0;
}
