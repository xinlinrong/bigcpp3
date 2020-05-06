#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int main(int argc, char **argv) {
    string line{};
    cout << "Please input two number:";
    getline(cin, line);

    if (cin.fail()) {
        cout << "Check input is faile" << endl;
        return 0;
    }

    std::string::size_type st;
    int pos = line.find_first_of(" ");
    double value1 = stod(line.substr(0, pos - 1), &st);
    double value2 = stod(line.substr(pos, -1), &st);
    if (abs(value1 - value2) < 0.01) {
        cout << "They are the same up to  two decimal places" << endl;
    } else {
        cout << "They are differnt" << endl;
    }
    return 0;
}
