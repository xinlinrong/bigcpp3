#include <iostream>
#include <string>

using namespace std;

// 练习 a
int prog_e4_3_a(string input_string)
{
    cout << "Result string is: ";
    for (auto istr = input_string.begin(); istr != input_string.end(); ++ istr) {
        if (*istr >= 'A' && *istr <= 'Z') {
            cout << *istr;
        }
    }
    cout << endl;
    return 0;
}

// 练习 b
int prog_e4_3_b(string input_string)
{
    cout << "Result string is: ";
    string new_input_string{};
    for (int i = 0; i <= input_string.size(); ++ i) {
        if ((input_string[i] >= 'A' && input_string[i] <= 'Z') || (input_string[i] >= 'a' && input_string[i] <= 'z')) {
            new_input_string.push_back(input_string[i]);
        }
    }
    for (int i = 0; i < new_input_string.size(); ++i) {
        if (i % 2 == 0) {
            cout << new_input_string[i];
        }
    }
    cout << endl;

    return 0;
}

// 练习 c
int prog_e4_3_c(string input_string)
{
    string replace_string = input_string;
    for (int i = 0; i <= replace_string.size(); ++ i) {
        if (replace_string[i] == 'a' || replace_string[i] == 'A' ||
            replace_string[i] == 'e' || replace_string[i] == 'E' ||
            replace_string[i] == 'i' || replace_string[i] == 'I' ||
            replace_string[i] == 'o' || replace_string[i] == 'O' ||
            replace_string[i] == 'u' || replace_string[i] == 'U'
        ) {
            replace_string[i] = '_';
        }
    }
    cout << "Result string is " << replace_string << endl;

    return 0;
}

// 练习 d
int prog_e4_3_d(string input_string)
{
    int count{0};
    for (int i = 0; i <= input_string.size(); ++ i) {
        if (input_string[i] == 'a' || input_string[i] == 'A' ||
            input_string[i] == 'e' || input_string[i] == 'E' ||
            input_string[i] == 'i' || input_string[i] == 'I' ||
            input_string[i] == 'o' || input_string[i] == 'O' ||
            input_string[i] == 'u' || input_string[i] == 'U'
        ) {
            ++ count;
        }
    }
    cout << "Result count of a e i o u is " << count << endl;

    return 0;
}

int main(int argc, char **argv)
{
    char ex_num;
    string input_string{};

    cout << "Please enter excerise num(a, b, c, d):";
    cin >> ex_num;
    cout << "Please enter parameter input_string:";
    cin >> input_string;
    switch (ex_num) {
        case 'a':
           prog_e4_3_a(input_string);
           break;
        case 'b':
           prog_e4_3_b(input_string);
           break;
        case 'c':
           prog_e4_3_c(input_string);
           break; 
        case 'd':
           prog_e4_3_d(input_string);
           break; 
        default:
            cout << "Not implement" << endl;
            break;
    }

    return 0;
}