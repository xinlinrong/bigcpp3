#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv) {
    cout << "Please input a number:";
    double input_number{0.0};
    cin >> input_number;
    cout << "pow(2) of number is:" << (input_number * input_number) << endl;
    cout << "pow(3) of number is:" << (input_number * input_number * input_number) << endl;
    cout << "pow(4) of numner is:" << pow(input_number, 4) << endl;
    return 0;
}
