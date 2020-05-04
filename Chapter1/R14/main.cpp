#include <iostream>

#include "area.hpp"

using namespace std;
using namespace bigcpp::chapter1;

int main(int argc, char **argv) {
    House h{10.0, 10.0, 3.0};
    h.add_door(2, 1.8);
    h.add_window(1.5, 1);
    double area = h.get_area();
    cout << "house area is " << area << endl;
    return 0;
}