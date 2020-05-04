#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv) {
    cout << "Please Input first number:";
    int first_number{0};
    cin >> first_number;
    cout << "Pleast Input second number";
    int second_number{0};
    cin >> second_number;

    cout << "sum of two numbers is:" << (first_number + second_number) << endl;
    cout << "sub of two numbers is:" << (first_number - second_number) << endl;
    cout << "product of two numbers is:" <<  (first_number * second_number)  << endl;
    cout << "averange of two numbers is:" <<  1.0 * (first_number * second_number) / 2  << endl;
    return 0;
}
