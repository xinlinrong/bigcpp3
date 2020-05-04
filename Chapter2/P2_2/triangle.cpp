#include <iostream>
#include <cmath>
#include "triangle.hpp"

using namespace std;
using namespace bigcpp::chapter2;

const double pi = 3.1415926;

bool Triangle::check_if_valid()
{
    double diff_x{0.0};
    double diff_y{0.0};

    double line_ab ={0.0};
    diff_x = abs(this->point_a.get_x() - this->point_b.get_x());
    diff_y = abs(this->point_a.get_y() - this->point_b.get_y());
    line_ab = sqrt(pow(diff_x, 2) + pow(diff_y, 2));

    double line_bc = {0.0};
    diff_x = abs(this->point_b.get_x() - this->point_c.get_x());
    diff_y = abs(this->point_b.get_y() - this->point_c.get_y());
    line_bc = sqrt(pow(diff_x, 2) + pow(diff_y, 2));

    double line_ac = {0.0};
    diff_x = abs(this->point_a.get_x() - this->point_c.get_x());
    diff_y = abs(this->point_a.get_y() - this->point_c.get_y());
    line_ac = sqrt(pow(diff_x, 2) + pow(diff_y, 2));

    if (line_ab + line_bc < line_ac || line_ab + line_ac < line_bc || line_ac + line_bc < line_ab) {
        return false;
    }
    return true;
}

double Triangle::get_long_of_ab()
{
    double diff_x{0.0};
    double diff_y{0.0};
    diff_x = abs(this->point_a.get_x() - this->point_b.get_x());
    diff_y = abs(this->point_a.get_y() - this->point_b.get_y());
    return sqrt(pow(diff_x, 2) + pow(diff_y, 2));
}

double Triangle::get_long_of_ac()
{
    double diff_x{0.0};
    double diff_y{0.0};
    diff_x = abs(this->point_a.get_x() - this->point_c.get_x());
    diff_y = abs(this->point_a.get_y() - this->point_c.get_y());
    return sqrt(pow(diff_x, 2) + pow(diff_y, 2));
}

double Triangle::get_long_of_bc()
{
    double diff_x{0.0};
    double diff_y{0.0};
    diff_x = abs(this->point_b.get_x() - this->point_c.get_x());
    diff_y = abs(this->point_b.get_y() - this->point_c.get_y());
    return sqrt(pow(diff_x, 2) + pow(diff_y, 2));
}

double Triangle::get_primeter()
{
    return this->get_long_of_ab() + this->get_long_of_ac() + this->get_long_of_bc();
}

double Triangle::get_angle_abc()
{
    double ab = this->get_long_of_ab();
    double ac = this->get_long_of_ac();
    double bc = this->get_long_of_bc();

    return acos((pow(ab, 2) + pow(bc, 2) - pow(ac, 2))/(2 * ab * bc)) * 180 / pi;
}

double Triangle::get_angle_bac()
{
    double ab = this->get_long_of_ab();
    double ac = this->get_long_of_ac();
    double bc = this->get_long_of_bc();

    return acos((pow(ab, 2) + pow(ac, 2) - pow(bc, 2))/(2 * ab * ac))  * 180 / pi;
}

double Triangle::get_angle_acb()
{
    double ab = this->get_long_of_ab();
    double ac = this->get_long_of_ac();
    double bc = this->get_long_of_bc();

    return acos((pow(ac, 2) + pow(bc, 2) - pow(ab, 2))/(2 * ac * bc))  * 180 / pi;
}

double Triangle::get_area()
{
    double angle_bac = this->get_angle_bac();
    double line_ab = this->get_long_of_ab();
    double line_ac = this->get_long_of_ac();
    return (1.0 / 2 * sin(angle_bac*pi/180) * line_ab * line_ac);
}
