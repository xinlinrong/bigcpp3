#include <iostream>

#include "cost.hpp"

using namespace std;
using namespace bigcpp::chapter1;

int main(int argc, char **argv) {

    CarCost ccost{100, 4, 50, 0.05};
    TrainCost tcost{13.01};

    cout << "Car cost you $" << ccost.get_cost() << endl;
    cout << "Train cost you $" << tcost.get_cost() << endl;
    
    if (ccost.get_cost() > tcost.get_cost()) {
        cout << "Go for work by train" << endl;
    } else {
        cout << "Go for work by car" << endl;
    }
    return 0;
}
