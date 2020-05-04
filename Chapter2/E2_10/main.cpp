#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char **argv) {
    double gal_amont{0.0};
    double miles_per_gal{0.0};
    double price_per_gal{0.0};

    cout << "Gas Box left oil(gal):";
    cin >> gal_amont;
    cout << "Per gal your car run miles:";
    cin >> miles_per_gal;
    cout << "Price of per gal oil:";
    cin >> price_per_gal;

    cout << "100 miles you cost is: $" << fixed << setprecision(2) << (100 * 4 / miles_per_gal) << endl;
    cout << "You car can run " << gal_amont * miles_per_gal << "miles" << endl;
    return 0;
}
