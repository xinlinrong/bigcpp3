#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char **argv) {
    const double G_val{9.8};
    double t_val{0}, move_val{0};

    cout << "Please input time (second):";
    cin >> t_val;
    move_val = (1.0/2) * G_val * pow(t_val, 2);
    cout << "After the first " << t_val << "seconds, the object has fallen " << move_val << " meter" << endl;
    return 0;
}
