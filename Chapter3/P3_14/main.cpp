#include <iostream>

using namespace std;
int main(int argc, char **argv) {
    int input_year{0};
    cout << "please input year to judge:";
    cin >> input_year;
    if (cin.fail()) {
        cout << "input value is invalid" <<endl;
        return -1;
    }
    if (input_year < 1582) {
        cout << "input year is bigger than 1582" << endl;
        return -1;
    }

    if ((input_year%4==0) && (input_year%100) != 0) {
        cout << "input year " << input_year << " is loop year" << endl;       
    } else if ((input_year%400) == 0) {
        cout << "input year " << input_year << " is loop year" << endl;        
    } else {
        cout << "input year " << input_year << " is not loop year" << endl;        
    }
    return 0;
}
