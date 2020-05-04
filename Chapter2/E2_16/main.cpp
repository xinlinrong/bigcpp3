#include <iostream>
#include <string>
using namespace std;

int get_time_hours(string hour_string)
{
    return (hour_string[0] - '0') * 10 + (hour_string[1] - '0');
}

int get_time_minutes(string minute_string)
{
    return (minute_string[0] - '0') * 10 + (minute_string[1] - '0');
}

int main(int argc, char **argv) {
    const int hours_per_day = 24;
    const int minutes_per_hours = 60;

    string first_time;
    string second_time;

    cout << "Input military of time" << endl;

    cout << "Please enter the first time:";
    cin >> first_time;

    cout << "Please enter the second time:";
    cin >> second_time;

    int first_time_hours = get_time_hours(first_time.substr(0, 2));
    int first_time_minutes = get_time_hours(first_time.substr(2, 2));

    int second_time_hours = get_time_hours(second_time.substr(0, 2));
    int second_time_minutes = get_time_hours(second_time.substr(2, 2));

    int sub_hours = (second_time_hours > first_time_hours) ? (second_time_hours - first_time_hours) : (second_time_hours + hours_per_day - first_time_hours);
    int sub_minutes = (second_time_minutes > first_time_minutes) ? (second_time_minutes - first_time_minutes) : (second_time_minutes + minutes_per_hours - first_time_minutes);
    sub_hours = (second_time_minutes < first_time_minutes) ? (sub_hours -1) : sub_hours;

    cout << sub_hours << " hours " << sub_minutes << " minutes" << endl;
    return 0;
}
