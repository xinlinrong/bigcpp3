#include <iostream>
#include <string>

using namespace std;

// 题目 a
static int prog_r4_5_a()
{
    int min{0}, max{0};
    cout << "Please enter min num:";
    cin >> min;
    if (cin.fail()) {
        cout << "Get parameter min fail." << endl;
        return -1;
    } else if (min < 0) {
        cout << "Parameter min is not available." << endl;
        return -1;
    }

    cout << "Please enter max num:";
    cin >> max;
    if (cin.fail()) {
        cout << "Get parameter max fail." << endl;
        return -1;
    } else if (max < 0) {
        cout << "Parameter max is not available." << endl;
        return -1;
    }

    if (min >= max) {
        cout << "Parameter max must greater than min" << endl;
        return -1;
    }

    int index{min}, sum{0};
    for (index; index <= max; ++ index) {
        if (index % 2 == 0) {
            sum += index;
        }
    }

    cout << "R4_5 a answer result is " << sum << endl;
    return 0;
}

// 题目 b
static int prog_r4_5_b()
{
    int min{0}, max{0};
    cout << "Please enter min num:";
    cin >> min;
    if (cin.fail()) {
        cout << "Get parameter min fail." << endl;
        return -1;
    } else if (min < 0) {
        cout << "Parameter min is not available." << endl;
        return -1;
    }

    cout << "Please enter max num:";
    cin >> max;
    if (cin.fail()) {
        cout << "Get parameter max fail." << endl;
        return -1;
    } else if (max < 0) {
        cout << "Parameter max is not available." << endl;
        return -1;
    }

    if (min >= max) {
        cout << "Parameter max must greater than min" << endl;
        return -1;
    }

    int index{0}, sum{0}, square_num{0};
    while (square_num <= max) {
        if (square_num >= min) {
            cout << "square_num is " << square_num << endl;
            sum += square_num;
        }
        index ++;
        square_num = index * index;
    }

    cout << "R4_6 b answer result is " << sum << endl;
    return 0;
}

// 题目 c
static int prog_r4_5_c()
{
    int min{0}, max{0};
    cout << "Please enter num a:";
    cin >> min;
    if (cin.fail()) {
        cout << "Get parameter a fail." << endl;
        return -1;
    } else if (min < 0) {
        cout << "Parameter a is not available." << endl;
        return -1;
    }

    cout << "Please enter num b:";
    cin >> max;
    if (cin.fail()) {
        cout << "Get parameter b fail." << endl;
        return -1;
    } else if (max < 0) {
        cout << "Parameter b is not available." << endl;
        return -1;
    }

    if (min >= max) {
        cout << "Parameter b must greater than a" << endl;
        return -1;
    }

    int index{min}, sum{0};
    for (index=min; index <= max; ++ index) {
        if (index % 2 == 1) {
            sum += index;
        }
    }

    cout << "R4_5 c answer result is " << sum << endl;
    return 0;
}

// 题目 d
static int prog_r4_5_d()
{
    cout << "Please enter number n:";
    int n{0}, sum{0}, mod{0};
    cin >> n;
    if (cin.fail()) {
        cout << "Get parameter n fail." << endl;
        return -1;
    } else if (n < 0) {
        cout << "Parameter n is not available." << endl;
        return -1;
    }

    while (n > 0) {
        mod = n % 10;
        if (mod % 2 == 1) {
            sum += mod;
        }
        n = n / 10;
    }

    cout << "R4_5 d answer result is " << sum << endl;
    return 0;
}

// 题目 e
int main(int argc, char **argv)
{
    string  prog_name{};
    cout << "Please enter prog_name(a|b|c|d)";
    cin >> prog_name;
    if (prog_name == "a") {
        prog_r4_5_a();
    } else if (prog_name == "b") {
        prog_r4_5_b();
    } else if (prog_name == "c") {
        prog_r4_5_c();
    } else if (prog_name == "d") {
        prog_r4_5_d();
    } else {
        cout << "Not implement" << endl;
    }
    return 0;
}