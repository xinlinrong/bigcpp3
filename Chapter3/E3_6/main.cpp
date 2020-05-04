#include <iostream>

const int num_len = 3;
using namespace std;
int main(int argc, char **argv) {
    int nums[num_len];
    char strict_flag = 'y';
    cout << "input strict flag:(y or n)";
    cin >> strict_flag;
    if (strict_flag != 'y' && strict_flag != 'n') {
        cout << "error strict flag" << endl;
        return -1;
    }

    int index = 0;
    bool is_zero = false;
    bool is_increase = false;
    bool is_decrease = false;
    for (index = 0; index < num_len; ++ index) {
        cout << "input value of num" << (index + 1) << ":";
        cin >> nums[index];
        if (index >= 1) {
            // calculate delta
            if (nums[index] - nums[index - 1] > 0) {
                is_increase = true;
            } else if (nums[index] - nums[index - 1] < 0) {
                is_decrease = true;
            } else if (nums[index] - nums[index - 1] == 0) {
                is_zero = true;
            }
        }
    }

    if (strict_flag == 'y') {
        if (is_increase && ! is_decrease && ! is_zero) {
            cout << "increasing" << endl;
        } else if (!is_increase && is_decrease && ! is_zero) {
            cout << "decreasing" << endl;
        } else {
            cout << "neither" << endl;
        }
    } else {
        if (is_zero && !is_increase && !is_decrease) {
            cout << "increasing and descreasing" << endl;
        } else if (is_increase && !is_decrease) {
            cout << "increasing" << endl;;
        } else if (is_decrease && !is_increase) {
            cout << "decreasing" << endl;
        } else {
            cout << "neither" << endl;
        }
    }
    return 0;
}
