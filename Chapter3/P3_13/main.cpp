#include <iostream>
#include <string>

using namespace std;

// 个位数字
string roma_digit_in_unit(int digit)
{
    string digit_in_str{};
    switch(digit) {
        case 1:
            digit_in_str="I"; break;
        case 2:
            digit_in_str="II"; break;
        case 3:
            digit_in_str="III"; break;
        case 4:
            digit_in_str="IV"; break;
        case 5:
            digit_in_str="V"; break;
        case 6:
            digit_in_str="VI"; break;
        case 7:
            digit_in_str="VII"; break;
        case 8:
            digit_in_str="VIII"; break;
        case 9:
            digit_in_str="IX"; break;
    }
    return digit_in_str;
}

// 十位数字
string roma_digit_in_tens(int digit)
{
    string digit_in_str{};
    switch(digit) {
        case 1:
            digit_in_str="X"; break;
        case 2:
            digit_in_str="XX"; break;
        case 3:
            digit_in_str="XXX"; break;
        case 4:
            digit_in_str="XL"; break;
        case 5:
            digit_in_str="L"; break;
        case 6:
            digit_in_str="LX"; break;
        case 7:
            digit_in_str="LXX"; break;
        case 8:
            digit_in_str="LXXX"; break;
        case 9:
            digit_in_str="XC"; break;
    }
    return digit_in_str;
}

// 百位数字
string roma_digit_in_hundreds(int digit)
{
    string digit_in_str{};
    switch(digit) {
        case 1:
            digit_in_str="C"; break;
        case 2:
            digit_in_str="CC"; break;
        case 3:
            digit_in_str="CCC"; break;
        case 4:
            digit_in_str="CD"; break;
        case 5:
            digit_in_str="D"; break;
        case 6:
            digit_in_str="DC"; break;
        case 7:
            digit_in_str="DCC"; break;
        case 8:
            digit_in_str="DCCC"; break;
        case 9:
            digit_in_str="CM"; break;
    }
    return digit_in_str;
}

// 千位数字
string roma_digit_in_thousands(int digit)
{
    string digit_in_str{};
    switch(digit) {
        case 1:
            digit_in_str="M"; break;
        case 2:
            digit_in_str="MM"; break;
        case 3:
            digit_in_str="MMM"; break;
    }
    return digit_in_str;
}

int main(int argc, char **argv) {
    int origin_digit{0};
    string digit_result{};
    cout << "please input digit(1-3999):";
    cin >> origin_digit;
    if (cin.fail()) {
        cout << "input an invalid value" << endl;
        return -1;
    } 
    if (origin_digit <= 0 && origin_digit >= 3999) {
        cout << "digit value must greater than 0 and less than 4000" << endl;
        return -1;
    }

    int digit = origin_digit;
    if (digit/1000) {
        digit_result.append(roma_digit_in_thousands(digit/1000));
        digit -= (digit/1000) * 1000;
    }

    if (digit/100) {
        digit_result.append(roma_digit_in_hundreds(digit/100));
        digit -= (digit/100) * 100;
    }

    if (digit/10) {
        digit_result.append(roma_digit_in_tens(digit/10));
        digit -= (digit/10) * 10;
    }

    if (digit) {
        digit_result.append(roma_digit_in_unit(digit));
    }
    cout << "digit " << origin_digit << " transform into roma digit is " << digit_result << endl;
    return 0;
}
