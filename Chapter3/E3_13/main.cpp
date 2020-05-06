#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// check if time is available
bool check_time(string str_time)
{
    if (str_time.size() < 4) {
        return false;
    }

    string hour = str_time.substr(0, 2);
    string minute = str_time.substr(2,2);

    if (hour[0] > '2' || hour[0] < '0') {
        return false;
    }

    if (hour[1] > '3' || hour[1] <= '0') {
        return false;
    }

    if (minute[0] > '5' || minute[0] <= '0') {
        return false;
    }

    if (minute[1] > '5' || minute[1] <= '0') {
        return false;
    }

    return true;
}

int main(int argc, char **argv) {
    string time1{}, time2{};
    cout << "Please input time1 value:";
    cin >> time1;
    // check time1
    if (!check_time(time1)) {
        cout << "time1 " << time1 << " is not a valid time";
        return -1;
    }

    cout << "Please input time2 value:";
    cin >> time2;
    // check time2
    if (!check_time(time2)) {
        cout << "time2 " << time2 << " is not a valid time";
        return -1;
    }

    string hour1 = time1.substr(0, 2);
    string minute1 = time1.substr(2,2);

    string hour2 = time2.substr(0,2);
    string minute2 = time2.substr(0, 2);

    if (hour1 < hour2) {
        cout << time1 << " " << time2 << endl;
    } else if (hour1 == hour2){
        if (minute1 < minute2) {
            cout << time1 << " " << time2 << endl;
        } else if (minute1 == minute2) {
            cout << time1 << " " << time2 << endl;
        } else {
            cout << time2 << " " << time1 << endl;
        }
    } else {
        cout << time2 << " " << time1 << endl;
    }
    return 0;
}