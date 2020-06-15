#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int  argc, char **argv)
{
    string input_str{};
    cout << "Please enter origin word:" << endl;
    cin >> input_str;

    srand(time(0));
    for (int i = 0; i < input_str.size(); ++ i) {
        int left_pos = rand() % (input_str.size() - 1); // 左侧随机数
        int right_pos_mod = input_str.size() - left_pos; // 右侧随机数
        int right_pos = (rand() % right_pos_mod) + left_pos + 1;
        cout << "left position is " << left_pos << ", right position is " << right_pos << endl;
        char tmp = input_str[left_pos];
        input_str[left_pos] = input_str[right_pos];
        input_str[right_pos] = tmp;
        cout << "input_str" << " is " << input_str << endl;
    }
    cout << "Result word is " << input_str;
    return 0;
}