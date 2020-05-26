#include <iostream>
#include <string>

using namespace std;
const string pin_code{"1234"};
const int max_error_times{3};
const int max_input_times{3};
int main(int argc, char **argv) {
    string input_pin{};
    int init_times{0}, error_times{0};
    for (init_times; init_times < max_input_times; ++ init_times) {
        cout << "Please input your pin code:";
        cin >> input_pin;
        if (input_pin == pin_code) {
            cout << "Your PIN is correct." << endl;
            break;
        } else {
            ++ error_times;
            if (error_times < 3) {
                cout << "Your PIN is in correct" << endl;
                continue;
            } else {
                cout << "Your bank card is blocked." << endl;
                break;
            }
        }
    }
    cout << "exit program" << endl;
    return 0;
}
