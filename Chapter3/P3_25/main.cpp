#include <iostream>
#include <string>
#include <cmath>

using namespace std;

const double p0 = 1e-6;

int main(int argc, char ** argv)
{
    cout << "Please enter value:";
    double input_value{0.00};
    cin >> input_value;
    if (cin.fail()) {
        cout << "Enter value 'input_value' is not a valid double value." << endl;
        return -1;
    }

    cout << "Please enter unit(dB|Pa):";
    string input_unit{};
    cin >> input_unit;
    if (cin.fail()) {
        cout << "Enter value check fail." << endl;
        return -1;
    } else if (input_unit != "dB" && input_unit != "Pa") {
        cout << "Enter value 'input_unit' is invalid." << endl;
        return -1;
    }

    double check_value = input_value;
    if (input_unit == "Pa") {
        check_value = 20.0 * log10(input_value/p0);
    }

    string desc{};
    if (check_value >=0 && check_value < 30) {
        desc = "轻微的树叶沙沙响";
    } else if (check_value >=30 && check_value < 60) {
        desc = "安静的图书馆";
    } else if (check_value >=60 && check_value < 90) {
        desc = "正常谈话声";
    } else if (check_value >=90 && check_value < 100) {
        desc = "10米处的繁忙道路上的车声";
    } else if (check_value >=100 && check_value < 120) {
        desc = "1米处的凿岩锤声";
    } else if (check_value >=120 && check_value < 130) {
        desc = "可能的听力受损";
    } else if (check_value >=130) {
        desc = "痛阈";
    }
    cout << check_value << "dB:" << desc << endl;
    return 0;
}