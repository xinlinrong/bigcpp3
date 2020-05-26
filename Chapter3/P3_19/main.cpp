#include <iostream>
#include <string>

using namespace std;
int main(int argc, char **argv) {

    cout << "Please input amount your pay:";
    double pay_amount{0.00};
    cin >> pay_amount;
    if (cin.fail()) {
        cout << "Input parameter pay_amount is not a valid value"  << endl;
        return -1;
    } else if (pay_amount < 0) {
        cout << "Input parameter pay_amount is greater than 0"  << endl;
        return -1;
    }

    cout << "Please input satisfied level(1|2|3):";
    int satisfied_level_d{0};
    cin >> satisfied_level_d;
    if (cin.fail()) {
        cout << "Input parameter satisfied_level_d is not a valid value"  << endl;
        return -1;
    } else if (satisfied_level_d < 0 || satisfied_level_d > 3) {
        cout << "Input parameter satisfied_level_d is between 1 to 3"  << endl;
        return -1;
    }

    double tips_percentage{0.00};
    string satisfied_level_s{};
    switch (satisfied_level_d) {
        case 1:
            satisfied_level_s = "Satisfied Very Much";
            tips_percentage = 0.20;
            break;
        case 2:
            satisfied_level_s = "Satisfied";
            tips_percentage = 0.15;
            break;
        case 3:
            satisfied_level_s = "Not so satisfied";
            tips_percentage = 0.10;
            break;
    }

    int tips_of_cents = int (pay_amount * tips_percentage * 100 + 0.5);
    int dollors = tips_of_cents /100;
    int cents = tips_of_cents % 100;
    cout << "Service Satisfied level: " << satisfied_level_s << "!" << endl;
    cout << "Service Tips: $ " << dollors << " and " << cents << " cents" << endl;
    return 0;
}
