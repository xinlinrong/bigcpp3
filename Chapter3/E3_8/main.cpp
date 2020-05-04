#include <iostream>

using namespace std;

const int num_len = 10;
int main(int argc, char **argv) {
    int index = 0;
    int nums[num_len];
    bool is_equal = true;
    for (index; index < num_len; ++ index) {
        cout << "input num" << (index + 1) << ":";
        cin >> nums[index];
        if (index >= num_len/2 && is_equal) {
            if (nums[num_len - 1 - index] - nums[index] != 0) {
                is_equal = false;
            }
        }
    }

    if (is_equal) {
        cout << "two pairs" << endl;
    } else {
        cout << "not two pairs" << endl;
    }
    return 0;
}
