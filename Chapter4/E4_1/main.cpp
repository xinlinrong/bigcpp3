#include <iostream>
#include <string>

using namespace std;

// 练习 a
int prog_e4_1_a()
{
    const int numeric_min{2};
    const int numeric_max{100};
    int numeric_summary{0};

    for (int i = numeric_min; i <= numeric_max; i ++) {
        if (i % 2 == 0) {
            numeric_summary += i;
        }
    }
    cout << "Ouput result is " << numeric_summary << endl;
    return 0;
}

// 练习 b
int prog_e4_1_b()
{
    const int numeric_min{1};
    const int numeric_max{100};

    int i{1}, numeric_summary{0}, square_numeric;
    square_numeric = i * i;
    while ( square_numeric <= numeric_max) {
        numeric_summary += square_numeric;
        ++ i;
        cout << "square_numeric:" << square_numeric << endl; 
        square_numeric = i * i;
    }
    cout << "Output result is " << numeric_summary << endl;
}

// 练习 c
int prog_e4_1_c()
{
    const int pow_min{0};
    const int pow_max{20};
    cout << "Output result is :" << endl;
    for (int i = pow_min; i <= pow_max; ++ i) {
        int result = 0;
        for (int j = 0; j <= i; ++ j) {
            if (j == 0) {
                result = 1;
            } else {
                result *= 2;
            }
        }
        cout << 2 << "^" << i << " = " << result << endl;
    }
    return 0;
}

// 练习 d
int prog_e4_1_d()
{
    int a{0}, b{0};
    cout << "Please enter number a:";
    cin >> a;
    if (cin.fail() || a < 0) {
        cout << "Parameter a is invalid" << endl;
    }

    cout << "Please enter number b:";
    cin >> b;
    if (cin.fail() || b < 0) {
        cout << "Parameter b is invalid" << endl;
    }

    int summary{0};
    int min = (a >= b) ? b : a;
    int max = (a >= b) ? a : b;
    for (int i = min; i <= max; ++i) {
        if (i % 2 == 1) {
            summary += i;
        }
    }
    cout << "Output result is " << summary << endl;
    return -1;
}

// 练习 e
int prog_e4_1_e()
{
    int input_numeric{0};
    int result_summary{0};
    cout << "Please enter number:";
    cin >> input_numeric;
    if (cin.fail() || input_numeric <= 0) {
        cout << "Parameter input_numeric is invalid" << endl;
        return -1;
    }

    while(input_numeric > 0) {
        int last_numeric = input_numeric % 10;
        if (last_numeric % 2 == 1) {
            result_summary += last_numeric;
        }
        input_numeric = input_numeric / 10;
    }
    cout << "Output result is " << result_summary << endl;
    return 0;
}

int main(int argc, char **argv)
{
    char prog_name;
    cout << "Please enter program name(a, b, c, d, e):";
    cin >> prog_name;
    switch (prog_name) {
        case 'a':
            prog_e4_1_a();
            break;
        case 'b':
            prog_e4_1_b();
            break;
        case 'c':
            prog_e4_1_c();
            break;
        case 'd':
            prog_e4_1_d();
            break;
        case 'e':
            prog_e4_1_e();
            break;
        default:
            cout << "Not implement" << endl;
    }
    return 0;
}