#include <iostream>
#include <string>

using namespace std;

const double normal_work_hours{40.0};
const double max_work_hours_per_weeks{168.0};
const double over_time_pay_percentage{1.50};

int main(int argc, char **argv) {



    cout << "Please input employee' name:";
    string emp_name{};
    cin >> emp_name;

    cout << "Please input salary per hour:";
    double salary_per_hour{0.00};
    cin >> salary_per_hour;
    if (cin.fail()) {
        cerr << "input fail, get parameter salary_per_hour fail." << endl;
        return -1;
    } else if (salary_per_hour < 0) {
        cerr << "input fail, parameter salary_per_hour must be greater than 0." << endl;
        return -1;
    }

    cout << "Please input work hours last week:";
    double work_hours{0.00};
    cin >> work_hours;
    if (cin.fail()) {
        cerr << "input fail, get parameter work_hours fail." << endl;
        return -1;
    } else if (work_hours < 0 || work_hours > max_work_hours_per_weeks) {
        cerr << "input fail, parameter work_hours must be greater or equal 0 and less than 168." << endl;
        return -1;
    }

    double salary_to_pay{0.00};
    if (work_hours > normal_work_hours) {
        salary_to_pay = (normal_work_hours * salary_per_hour) + (work_hours - normal_work_hours) * salary_per_hour * over_time_pay_percentage;
    } else {
        salary_to_pay = work_hours * salary_per_hour;
    }
    cout << "employee " << emp_name << " last week salary is:" << salary_to_pay << endl; 
    return 0;
}
