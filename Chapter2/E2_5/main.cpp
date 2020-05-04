#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(int argc, char **argv) {
    cout << "Please Input fisrt number:";
    int first_number{0};
    cin >> first_number;
    cout << "Please Input second number:";
    int second_number{0};
    cin >> second_number;

    cout << "Distance of two number is:" << abs(first_number-second_number) << endl;
    cout << "Max of two number is:" << max(first_number, second_number) << endl;
    cout << "Min of two number is:" << min(first_number, second_number) << endl;
    return 0;
}
