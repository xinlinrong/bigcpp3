#include <iostream>
#include <stdexcept>
#include <cmath>

using namespace std;

int main(int argc, char **argv) {

    const double balance_speed = 0.2;
    const double startup_price  = 3.5;
    const double startup_distance = 0.2;
    const double counter_distance = 0.2;
    const double run_price = 0.55;
    const double wait_price = 0.55;
    
    int input_var_minutes = 0;
    double input_var_distance = 0.00;
    
    cout << "Input current distance: ";
    cin >> input_var_distance;
    cout << endl;

    cout << "Input how much minutes did you cost: ";
    cin >> input_var_minutes;
    cout << endl;

    if (input_var_distance <= 0) {
        throw invalid_argument("The distance taxi ran must be greater than 0");
    }

    if (input_var_minutes <= 0) {
        throw invalid_argument("The time taxi ran must be greater than 0");
    }

    double cost = 0.00;
    double speed = input_var_distance / input_var_minutes;

    if (speed < balance_speed) {
        cost += wait_price * input_var_minutes;
    } else {
        if (input_var_distance <= startup_distance) {
            cost += startup_price;
        } else {
            cost += startup_price + ceil((input_var_distance - startup_distance) / counter_distance) * 0.55;
        }
    }

    cout << "You must pay for $" << cost << endl;
    
    return 0;
}
