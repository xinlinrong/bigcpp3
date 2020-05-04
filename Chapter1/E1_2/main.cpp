#include <iostream>
#include <stdexcept>

using namespace std;

/**
 * calculate sum from 1 to num
 */
int sum(int num)
{
    if (num > 1) {
        return (num + sum(num - 1));
    } else {
        return 1;
    }
}

int main(int argc, char **argv) {

    int result_sum = 0;
    int input_var_num = 0;
    
    cout << "Input a integer value > 0 :" << std::endl;
    cin >> input_var_num;
    cout << endl;

    if (input_var_num <= 0) {
        throw invalid_argument("variable input_var_num must be greater than 0");
    }

    result_sum = sum(input_var_num);
    cout << "Result Sum is " << result_sum << std::endl;
    return 0;
}
