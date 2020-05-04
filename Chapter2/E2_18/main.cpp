#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) {
    const string months[] = {"January", "February", "March", "Apirl", "May", "June", "July", "Auguest", "Setempber", "October", "November", "December"};
    cout << "Please input number of month (1-12):";
    int number_of_month;
    cin >> number_of_month;
    if (number_of_month > 12 || number_of_month < 1) {
        cout << "invalid number value" << endl;
        return -1;
    }
    cout << months[number_of_month-1];
    return 0;
}
