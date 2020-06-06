#include <iostream>
#include <string>

using namespace std;

//题目 a 
static int prog_r4_4_a()
{
    cout << "Please enter number n:";
    int n{0}, number{0}, square_number{0};
    cin >> n;
    if (cin.fail()) {
        cout << "Please enter a valid value." << endl;
        return -1;
    } else if (n < 0) {
        cout << "Value must be greater than 0" << endl;
        return -1;
    }

    number = 0;
    square_number = number * number;
    while (square_number < n) {
        cout << square_number << " ";
        ++ number;
        square_number = number * number;
    }
    cout << endl;
    return 0;
}

// 题目 b
static int div_num{10};
static int prog_r4_4_b()
{
    cout << "Please enter number n:";
    int n{0}, number{0};
    cin >> n;
    if (cin.fail()) {
        cout << "Please enter a valid value." << endl;
        return -1;
    } else if (n < 10) {
        cout << "Value must be greater than 10" << endl;
        return -1;
    }

    for (number = 0; number < n; ++ number) {
        if (number % 10 == 0 && number > 0) {
            cout << number << " ";
        }
    }

    return 0;
}

// 题目 c
static int pnum{2};
static int pow_num(int num, int times) {
    if (times >= 0) {
        return pow_num(num , times - 1) * num;
    } else {
        return 1;
    }
}
static int prog_r4_4_c()
{
    cout << "Please enter number n:";
    int n{0}, times{0}, result_num{0};
    cin >> n;
    if (cin.fail()) {
        cout << "Please enter a valid value." << endl;
        return -1;
    } else if (n < 1) {
        cout << "Value must be greater than 1" << endl;
        return -1;
    }

    result_num = pow_num(pnum, times);
    while (result_num < n) {
        cout << result_num << " ";
        ++ times;
        result_num = pow_num(pnum, times);
    }
    return 0;
}

int main(int argc, char **argv)
{
    cout << "Please enter prog name(a|b|c):";
    string prog_name{};
    cin >> prog_name;
    if (prog_name == "a") {
        return prog_r4_4_a();
    } else if (prog_name == "b") {
        return prog_r4_4_b();
    } else if (prog_name == "c") {
        return prog_r4_4_c();
    } else {
        cout << "Not implement" << endl;
    }
    return 0 ;
}