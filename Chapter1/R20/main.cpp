#include <iostream>

#include "rectangle.hpp"

using namespace std;
using namespace bigcpp::chapter1;

int main(int argc, char **argv) {
    R1_20_Rectangle rectangle{11, 13};
    if (rectangle.validate_checkin()) {
        rectangle.draw();
    }
    return 0;
}