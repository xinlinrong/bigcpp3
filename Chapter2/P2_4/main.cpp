#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char **argv) {
    const int years{5};
    const double oil_rate_per_gal{50.00};

    double new_car_price{0.0};
    double run_miles_per_year{0.0};
    double oil_price_per_gal{0.0};
    double sale_price{0.0};

    cout << "The new car price:";
    cin >> new_car_price;

    cout << "How many miles your car run per yeas:";
    cin >> run_miles_per_year;
    
    cout << "The price of oil per gal:";
    cin >> oil_price_per_gal;
    
    cout << "The price of your car after " << years <<  " year later:";
    cin >> sale_price;

    double discout_of_car = new_car_price - sale_price;
    double oil_cost = (run_miles_per_year * years * oil_price_per_gal) / oil_rate_per_gal;
    double cost_of_all = discout_of_car + oil_cost;
    cout << "Discount of car was $" << discout_of_car << endl;
    cout << "Oil cost was $" << oil_cost << endl;
    cout << "Cost of your car in " << years << " year is $" << cost_of_all << endl;
    return 0;
}
