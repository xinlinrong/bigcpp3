#include <iostream>
#include <string>
#include <cmath>

using namespace std;
const double max_t{60};

static int prog_p3_28()
{
    const double m{2};
    const double r{3};

    cout << "Please enter speed of object:";
    double speed_v{0};
    cin >> speed_v;
    if (cin.fail()) {
        cout << "Speed_v is unavailable" << endl;
        return -1;
    } else if (speed_v < 0) {
        cout << "Speed_v is not " << endl;
        return -1;
    }

    double real_t = m * pow(speed_v, 2) / r;
    if (real_t > max_t) {
        cout << "speed_v " << speed_v << " will break it" << endl;
    } else {
        cout << "speed_v " << speed_v << " will not break it" << endl;
    }
    return 0;
}

static int prog_p3_29()
{
    const double r{3};
    const int speeds[4] = {1, 10, 20, 40};

    cout << "Please enter quality of object:";
    double mass{0};
    cin >> mass;
    if (cin.fail()) {
        cout << "Quality is unavailable" << endl;;
        return -1;
    } else if (mass < 0) {
        cout << "Quality is invalid" << endl;;
        return -1;
    }

    int index = 0;
    int cur_speed{0};
    for (index = 0; index < 4; ++ index) {
        if ((mass * pow(speeds[index], 2) / r) <= max_t) {
            cur_speed = speeds[index];
        }
    }

    if (cur_speed) {
        cout << "Mass " << mass << " max speed  is " << cur_speed << endl;
        return 0;
    } else {
        cout << "No speed found" << endl;
        return -1;
    }
}

int main(int argc, char **argv)
{
    cout << "Please enter program name(p3_28|p3_29):";
    string choose{};
    cin >> choose;
    if (cin.fail()) {
        cout << "Choose is unavailable" << endl;
        return -1;
    } else if (choose != "p3_28" && choose != "p3_29") {
        cout << "Choose value is invalid" << endl;
        return -1;
    }

    if (choose == "p3_28") {
        return prog_p3_28();
    } else {
        return prog_p3_29();
    }
}