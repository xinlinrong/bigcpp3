#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    int i{1};
    double input_temp;
    double heighest_temp_mon{1};
    double heighest_temp;

    cout << "Please input temp:" << endl;
    cin >> input_temp;
    if (cin.fail()) {
        cout << "Parameter input_temp is invalid." << endl;
        return 0;
    }
    heighest_temp = input_temp;

    while (true) {
        cin >> input_temp;
        if (cin.fail()) {
            break;
        } else {
            ++ i;
            if (input_temp > heighest_temp) {
                heighest_temp = input_temp;
                heighest_temp_mon = i;
            }
        }
    }
    cout << "The heighest temp month is " <<  heighest_temp_mon << endl;
    return 0;
}
