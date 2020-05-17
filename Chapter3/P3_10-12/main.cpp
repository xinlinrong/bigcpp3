#include <iostream>
#include <string>
#include <vector>
#include "shape.hpp"

using namespace std;
using namespace chapter3::shape;

int main(int argc, char **argv)
{
    if (!shape_utils::check_coordinate_line("1.22,3.11")) {
        cout << "input line is not a valid coordinate" << endl;
    } else {
        double x = shape_utils::get_coordinate_x("1.22,3.11");
        double y = shape_utils::get_coordinate_y("1.22,3.11");
        cout << "input line is a valid coordinate" << endl;
    }
    return 0;
}