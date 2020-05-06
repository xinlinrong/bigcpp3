#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// check month
bool check_month(int month)
{
    return (month >=1 && month <= 12);
}

// check date
bool check_date(int month, int date)
{
    int max_date = 0;
    switch(month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            max_date = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            max_date = 30;
            break;
        default:
            max_date = 29;
            break;
    }

    return (date >= 1 && date <= max_date);
}
int main(int argc, char **argv) {
    int month{0}, date{0};
    cout << "Please input month:";
    cin >> month;
    if (cin.fail() || !check_month(month)) {
        cout << "Month is not a valid value" << endl;
        return -1;
    }

    cout << "Please input month:";
    cin >> date;
    if (cin.fail() || !check_date(month, date)) {
        cout << "Date is not a valid value" << endl;
        return -1;
    }

    string season{};
    switch(month) {
        case 1:
        case 2:
        case 3:
            season = "Winter";
            break;
        case 4:
        case 5:
        case 6:
            season = "Spring";
            break;
        case 7:
        case 8:
        case 9:
            season ="Summer";
            break;
        case 10:
        case 11:
        case 12:
            season = "Fall";
    }

    if (month % 3 == 0 && date >= 21) {
        if (season == "Winter") {
            season = "Spring";
        } else if (season == "Spring") {
            season = "Summer";
        } else if (season == "Summer") {
            season = "Fall";
        } else {
            season = "Winter";
        }
    }
    cout << "The value of season is " << season;
    return 0;
}
