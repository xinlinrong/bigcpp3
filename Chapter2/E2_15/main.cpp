#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int pow10_by_nums(int width)
{
    if (width > 0) {
        return 10 * pow10_by_nums(width - 1);
    } else {
        return 1; 
    }
}

int main(int argc, char **argv) {
    int input_number = 0;
    cout << "Please input a number between 0 and 99999:";
    cin >> input_number;
    if (input_number > 99999) {
        cout << "invalid argument" << endl;
        return -1;
    }

    const int max_width = 5;
    int current_width = max_width;
    while (current_width > 0) {
        -- current_width;
        cout << setw(2) << input_number / pow10_by_nums(current_width);
        input_number = input_number % pow10_by_nums(current_width);
    }
    cout << endl;
    return 0;
}
