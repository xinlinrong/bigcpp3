#include <iostream>

const int num_len = 3;
using namespace std;
int main(int argc, char **argv) {
    int nums[num_len];
    bool is_zero = false;
    bool is_increase = false;
    bool is_decrease = false;

    int index = 0;
    for (index; index < num_len; ++ index) {
        cout << "input num" << (index+1) << ":";
        cin >> nums[index];
        if (index >= 1) {
            if (nums[index] - nums[index -1] > 0) {
                is_increase = true;
            } else if (nums[index] - nums[index -1] == 0) {
                is_zero = true;
            } else if (nums[index] - nums[index -1] < 0) {
                is_decrease = true;
            }
        }
    }

    if (!is_zero && (is_increase ^ is_decrease)) {
        cout << "in order" << endl;
    } else {  
        cout << "not in order" << endl;
    }
    return 0;
}
