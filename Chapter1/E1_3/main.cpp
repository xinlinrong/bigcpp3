#include <iostream>
#include <stdexcept>

using namespace std;

int multiple_by(int num) {
    if (num > 1) {
        return num * multiple_by(num - 1);
    } else {
        return 1;
    }
}

int main(int argc, char **argv) {
    int input_integer = 0;
    long long result_num = 0;
    
    cout << "Input variable for multiple products:";
    cin >> input_integer;
    cout << endl;

    if (input_integer <= 0) {
        throw invalid_argument("Variable input_integer must be greater than 0");
    }
    result_num = multiple_by(input_integer);
    cout << "Result of multiple_by(" << input_integer << ") is " << result_num << endl;
    return 0;
}
