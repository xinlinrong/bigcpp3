#include <iostream>
#include <string>

using namespace std;
int main(int argc, char **argv)
{
    int count{0};
    double input{0}, sum{0}, avg{0}, min{0}, max{0}; 

    cout << "Please enter a list of numeric:";
    cin >> input;
    if (cin.fail()) {
        cout << "Parameter input is invalid" << endl;
        return -1;
    } else {
        ++ count;
        sum += input;
        avg = input / count;
        min = input;
        max = input;
    }

    while (true) {
        cin >> input;
        if (cin.fail()) {
            break;
        } else {
            ++ count;
            sum += input;
            max = (input > max) ? input : max;
            min = (input < min) ? input : min;
        }
    }

    cout << "Result of avg is " << (sum/count) << endl;
    cout << "Result of min is " << min << endl;
    cout << "Result of max is " << max << endl;
    cout << "Result of max - min is " << (max - min) << endl;
    return 0;
}