#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

const vector<string> pocker_colors({"D", "H", "S", "C"});
const vector<string> pocker_values({"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"});

// 检验扑克的值
bool check_pocker_value(string pocker_value)
{
    int str_len = pocker_value.size();
    if (!str_len || str_len > 3) {
        cout << "porker string lenght is not available" << endl;
        return false;
    }

    string color{};
    string value{};
    if (str_len == 2) {
        value = pocker_value.substr(0, 1);
        color = pocker_value.substr(1,1);
    } else if (str_len == 3) {
        value = pocker_value.substr(0, 2);
        color = pocker_value.substr(2,1);
    }

    auto value_itear = find(pocker_values.begin(), pocker_values.end(), value);
    auto color_itear = find(pocker_colors.begin(), pocker_colors.end(), color);
    if (value_itear == pocker_values.end() || color_itear == pocker_colors.end()) {
        cout << "can not find value or color" << endl;
        return false;
    }
    return true;
}

// 获取输出的朴克牌面值
string get_output_value(string pocker_value)
{
    if (pocker_value == "A") {
        return "Acer";
    } else if (pocker_value == "J") {
        return "Jack";
    } else if (pocker_value == "Q") {
        return "Queen";
    } else if (pocker_value == "K") {
        return "King";
    }
    return pocker_value;
}

// 获取输出的扑克牌面花色
string get_output_color(string pocker_color)
{
    if (pocker_color == "D") {
        return "Diamonds";
    } else if (pocker_color == "H") {
        return "Heart";
    } else if (pocker_color == "S") {
        return "Spades";
    } else if (pocker_color == "C") {
        return "Clubs";
    }
}

int main(int  argc, char **argv)
{
    // 派面值
    string pocker_value{};
    cout << "Enter the card notation:";
    cin >> pocker_value;
    if (cin.fail()) {
        cout << "Input pocker value is not available." << endl;
        return -1;
    }

    if (!check_pocker_value(pocker_value)) {
        return -1;
    }

    string color{};
    string value{};
    if (pocker_value.size() == 2) {
        value = pocker_value.substr(0, 1);
        color = pocker_value.substr(1,1);
    } else if (pocker_value.size() == 3) {
        value = pocker_value.substr(0, 2);
        color = pocker_value.substr(2,1);
    }

    cout << get_output_value(value) << " of " << get_output_color(color) << endl;
    return 0;
}