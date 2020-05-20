#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include "shape.hpp"

using namespace std;
using namespace chapter3::shape;

static void bigcpp_p3_10_prog();
static void bigcpp_p3_11_prog();
static void bigcpp_p3_12_prog();

int main(int argc, char **argv)
{
    string choise{};
    cout << "please choose program you run(p3_10|p3_11|p3_12)";
    cin >> choise;
    cout << "start program" << choise << endl;
    cout << "=======================================================" << endl;
    if (choise == "p3_10"){
            bigcpp_p3_10_prog();
    } else if (choise == "p3_11") {
            bigcpp_p3_11_prog();
    } else if (choise == "p3_12") {
            bigcpp_p3_12_prog();
    } else {
        cerr << "not implement" << endl;
    }
    cout << "=======================================================" << endl;
    cout << "exit program" << endl;
    return 0;
}

// 项目 p3_10
static void bigcpp_p3_10_prog()
{
    string cord_point_a{};
    string cord_point_b{};

    // 输入并检查 point a
    cout << "Input coordinate point a:";
    cin >> cord_point_a;
    if (!shape_utils::check_coordinate_line(cord_point_a)) {
        cerr << "input point a is not a valid coordinate" << endl;
        return;
    }

    // 输入并检查 point b
    cout << "Input coordinate point b:";
    cin >> cord_point_b;
    if (!shape_utils::check_coordinate_line(cord_point_b)) {
        cerr << "input point b is not a valid coordinate" << endl;
        return;
    }

    // 初始化
    shape_point point_a{ shape_utils::get_coordinate_x(cord_point_a), shape_utils::get_coordinate_y(cord_point_a)};
    shape_point point_b{ shape_utils::get_coordinate_x(cord_point_b), shape_utils::get_coordinate_y(cord_point_b)};

    // 判断 X 是否相等
    if (shape_utils::is_equal(point_a.get_cord_x(), point_b.get_cord_x(), 6)) {
        cerr << "coordinate of point a and point b is equal by x" << endl;
        return;
    }

    if (shape_utils::is_equal(point_a.get_cord_y(), point_b.get_cord_y(), 6)) {
        cerr << "coordinate of point a and point b is equal by y" << endl;
        return;
    }

    double x_length = abs(point_a.get_cord_x() - point_b.get_cord_x());
    double y_length = abs(point_a.get_cord_y() - point_b.get_cord_y());
    if (shape_utils::is_equal(x_length, y_length, 6)) {
        cout << "rectangle shape is square" << endl;
    } else {
        if (x_length > y_length) {
            cout << "rectangle shape is lanscape" << endl;
        } else {
            cout << "rectangle shape is portrait" << endl;
        }
    }
    return;
}

// 项目 p3_11
static void bigcpp_p3_11_prog()
{

}

// 项目 p3_12
static void bigcpp_p3_12_prog()
{
    
}