#include <iostream>
#include <cmath>

using namespace std;
int main(int argc, char **argv) {
    const double G_val = 6.67e-11;
    double distance {0};
    double M1_val {0}, M2_val{0};

    cout << "Distance between two object:";
    cin >> distance;
    
    cout << "Object M1 weight:";
    cin >> M1_val;

    cout << "Object M2 weight:";
    cin >> M2_val;

    double F_val = (G_val * M1_val * M2_val) / pow(distance, 2);
    cout << "Final F_val is: " << F_val << endl;
    return 0;
}
