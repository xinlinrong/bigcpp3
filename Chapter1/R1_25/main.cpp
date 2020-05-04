#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Good {
    string good_name;
    double price;
    Good(string name, double price): good_name{name}, price{price}{};
};

int main(int argc, char **argv) {
    // initialize good
    vector<Good> goods{
        {"good_1", 57.00},
        {"good_2", 98.87},
        {"good_3", 108.00},
        {"good_4", 95.56},
        {"good_5", 101.78},
        {"good_6", 94.89},
        {"good_7", 181},
        {"good_8", 98.87},
        {"good_9", 77.00},
        {"good_10", 98.87}
    };

    // get price lower or equal than 100
    vector<Good> good_fits {};
    for (auto it=goods.begin(); it != goods.end(); ++ it) {
        if (it->price <= 100) {
            good_fits.push_back(*it);
        }
    }

    auto max_it = *max_element(good_fits.begin(), good_fits.end(), [](Good good_a, Good good_b){return good_a.price <= good_b.price;});
    auto max_find_it = find_if(good_fits.begin(), good_fits.end(), [&max_it](Good good){return (good.price == max_it.price);});

    while (max_find_it != good_fits.end()) {
         cout << "good name is " << max_find_it->good_name << " good price is " << max_find_it->price << endl;
         max_find_it = find_if(++max_find_it, good_fits.end(), [&max_it](Good good){return (good.price == max_it.price);});
    }
    return 0;
}