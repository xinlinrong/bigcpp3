#include<iostream>
#include<string>
using namespace std;
int main(int argc, char *argv[])
{
    int month{0};
    cout << "Please input month value: ";
    cin >> month;
    if (cin.fail()) {
        cout << "month value is not available" << endl;
        return -1;
    }
    if (!(month>=1 && month <= 12)) {
        cout << "month value is between 1 and 12" << endl;
        return -1;
    }
    switch(month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "month " << month << " has 31 days" << endl;
            break;
        case 2:
            cout << "month " << month << " has 28 or 29 days" << endl;
            break;
        default:
            cout << "month " << month << " has 30 days" << endl;
            break;
    }
    return 0;
}
