#include <iostream>
using namespace std;

int main(int argc, char **argv) {
    cout << "Please Input a number between 1000 and 999,999:";
    string number_str{};
    cin >> number_str;
    int index = 0;
    for(index = 0; index < number_str.length(); ++index) {
        if (number_str[index] >= '0' && number_str[index] <= '9') {
            cout << number_str[index];
        }
    }
    cout << endl;
    return 0;
}
