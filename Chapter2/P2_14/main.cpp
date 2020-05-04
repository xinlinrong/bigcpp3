#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char **argv) {
    const double pi = 3.1415926;
    const double sita = 8.854e-12;

    double distance {0}, q1_val{0}, q2_val{0};
    double qe{0}; 
    
    cout << "Please input distance:";
    cin >> distance;

    cout << "Please input Q1 value:";
    cin >> q1_val;
    
    cout << "Please input Q2 value:";
    cin >> q2_val;

    qe = q1_val * q2_val / (4 * pi * pow(distance, 2) * sita); 
    cout << "qe value is: " << qe << endl;
    return 0;
}
