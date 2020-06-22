#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// 练习 19
int prog_e4_19()
{
    cout << "Please enter number:";
    int num{0};
    cin >> num;

    // 方法 1
    for (int i = 1; i <= num; ++i) {
        for (int j = 1; j <= 2 * num; ++j) {
            if (i > 1 && i < num) {
                if (j > (num+1) && j < 2 * num) {
                    cout << ' ';
                } else {
                    cout << '*';
                }
            } else {
                cout << '*';
            }
        }
        cout << endl;
    }

    // 方法 2
    for (int i = 1; i <= num; ++ i) {
        if (i == 1 || i == num) {
            cout << setfill('*') << setw(2 * num) << "*" << endl;
        } else {
            cout << setfill('*') << setw(num + 1) << "*" << setfill(' ') << setw(num -2) << " " << "*" << endl;
        }
    }
    return 0;
}

// 练习 20
int prog_e4_20()
{
    
}

int main(int argc, char **argv)
{
    cout << "Please enter num you want to run(19, 20):";
    int prog_num;
    cin >> prog_num;
    switch(prog_num) {
        case 19:
            prog_e4_19();
            break;
        case 20:
            prog_e4_20();
            break;
        default:
            cout << "Not implement" << endl;
            break;
    }
    return 0;
}