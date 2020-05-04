#include <iostream>
#include <cmath>

using namespace std;
int main(int argc, char **argv) {
    long long val{0};
    long long max_long = 10E10;
    cout << "please input val:";
    cin >> val;     

    if (val > max_long) {
        cout << "too large" << endl;
        return 0;
    }

    int n = 1;
    long long begin_val = 10;
    while (val >= begin_val) {
        begin_val *= 10;
        n += 1;
    }

    cout << val << " has " << n << " bit" << endl;
    return 0;
}
