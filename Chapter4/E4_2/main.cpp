#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 练习 a
int prog_e4_2_a()
{
    // 输入以非整数结束
    int numeric_input, numeric_min, numeric_max;
    cout << "Please enter a serial of numeric, end with non numeric:" << endl;
    cin >> numeric_input;
    if (cin.fail()) {
        cout << "Parameter numeric_input is invalid." << endl;
        return -1;
    }

    numeric_min = numeric_input;
    numeric_max = numeric_input;
    while (true) {
        cin >> numeric_input;
        if (cin.fail()) {
            break;
        } else {
            numeric_min = (numeric_input < numeric_min) ? numeric_input : numeric_min;
            numeric_max = (numeric_input > numeric_max) ? numeric_input : numeric_max;
        }
    }
    cout << "The max numeric of serial is " << numeric_max << endl;
    cout << "The min numeric of serial is " << numeric_min << endl;
    return 0;
}

// 练习 b
int prog_e4_2_b()
{
    // 输入以非整数结束
    int numeric_input, count_odd{0}, count_even{0};
    cout << "Please enter a serial of numeric, end with non numeric:" <<endl;
    while(true) {
        cin >> numeric_input;
        if (cin.fail()) {
            break;
        } else {
            count_odd += ((numeric_input > 0 && numeric_input %2 == 1) ? 1 : 0);
            count_even += ((numeric_input > 0 && numeric_input %2 == 0) ? 1 : 0);
        }
    }
    cout << "The number of odd is " << count_odd << endl;
    cout << "The number of event is " << count_even << endl;
    return 0;
}

// 练习 c
int prog_e4_2_c()
{
    // 输入以非整数结束
    cout << "Please enter a serial of numeric, end with none numeric:" << endl;
    vector<int> vsummarys{};
    int numeric_input{0}, result_summary{0};
    while(true) {
        cin >> numeric_input;
        if (cin.fail()) {
            break;
        } else {
            result_summary += numeric_input;
            vsummarys.push_back(result_summary);
        }
    }
    cout << endl;
    for (auto vsummary = vsummarys.begin(); vsummary != vsummarys.end();  ++ vsummary) {
        cout << * vsummary << " ";
    }
    cout << endl;
    return 0;
}

// 练习 d
int prog_e4_2_d()
{
    // 输入以非整数结束
    int input_numeric, input_old;
    cout << "Please enter a serial of numeric, end with none numeric:" << endl;
    cin >> input_numeric;
    if (cin.fail()) {
        cout << "Parameter numeric_input is invalid." << endl;
        return -1;
    }
    vector<int> vnums{};
    input_old = input_numeric;
    while(true) {
        cin >> input_numeric;
        if (cin.fail()) {
            break;
        } else {
            if (input_old == input_numeric) {
                vnums.push_back(input_numeric);
            }
            input_old = input_numeric;
        }
    }
    for (auto vnum = vnums.begin(); vnum != vnums.end();  ++ vnum) {
        cout << * vnum << " ";
    }
    cout << endl;
    return 0;
}

int main(int argc, char **argv)
{
    char prog_name;
    cout << "Please enter program name(a, b, c, d):";
    cin >> prog_name;
    switch (prog_name) {
        case 'a':
            prog_e4_2_a();
            break;
        case 'b':
            prog_e4_2_b();
            break;
        case 'c':
            prog_e4_2_c();
            break;
        case 'd':
            prog_e4_2_d();
            break;
        default:
            cout << "Not implement" << endl;
    }
    return 0;
}