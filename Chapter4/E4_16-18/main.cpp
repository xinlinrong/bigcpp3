#include <iostream>
#include <string>

using namespace std;

int prog_util_pow(int num, int pow_num)
{
    if (pow_num == 0) {
        return 1;
    } else {
        return num * prog_util_pow(num, pow_num - 1);
    }
}

// 练习 16
int prog_e4_16()
{
    for (int i = 0; i <= 20 ; ++i) {
        cout << prog_util_pow(2, i) << endl;
    }
    return 0;
}

// 练习 17
int prog_e4_17()
{
    cout << "Please enter a number:";
    int num{0}, mod_num{0};
    cin >> num;
    while (num) {
        mod_num = num % 2;
        num = num / 2;
        cout << mod_num << endl;
    }
    return 0;
}

// 练习 18
int prog_e4_18()
{
    for (int i = 1; i <= 10; ++i) {
        for (int j = 1; j <= 10; ++j) {
            cout << i * j << " ";
        }
        cout << endl;
    }
    return 0;
}

int main(int argc, char ** argv)
{
    cout << "Please enter prog num to run(16, 17, 18):";
    int prog_num{};
    cin >> prog_num;
    switch (prog_num) {
        case 16:
            prog_e4_16();
            break;
        case 17:
            prog_e4_17();
            break;
        case 18:
            prog_e4_18();
            break;
        default:
            cout << "Not implement" << endl;
            break;
    }

    return 0;
}