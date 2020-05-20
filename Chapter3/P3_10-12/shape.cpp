#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <utility>

#include "shape.hpp"

using namespace chapter3::shape;

static const double PI = 3.14159265;

// 获取坐标
vector<string> shape_utils::get_coordinate(string line)
{
    // 遍历并获取坐标
    vector<string> vcoord{};
    std::string::size_type pos_cur = 0, pos_start = 0;
    while (pos_start !=  string::npos && pos_cur != string::npos) {
        pos_cur = line.find_first_of(',', pos_start);
        if (pos_cur == string::npos) {
            string num_str{line.substr(pos_start)};
            vcoord.push_back(num_str);
        } else {
            string num_str{line.substr(pos_start, pos_cur)};
            vcoord.push_back(num_str);
            pos_start = pos_cur + 1;
        }
    }
    return vcoord;
}

// 检查是否是浮点型
bool shape_utils::check_if_numeric(string line)
{
    std::string::size_type st = 0;
    std::string::size_type line_size = line.size();
    if (line_size == 0) {
        return false;
    } else if ((line.at(0) == '-' || line.at(0) == '+') && line_size < 2) {
        return false;
    }

    for (st = 0; st != line_size; ++ st) {
        if (st == 0) {
            if (line.at(st) != '+' && line.at(st) != '-' && (line.at(st) > '9' || line.at(st) < '0')) {
                return false;
            }
        } else if (st == line_size - 1) {
            if (line.at(st) == '.') {
                return false;
            }
        } else {
            if (line.at(st) != '.' && (line.at(st) > '9' || line.at(st) < '0')) {
                return false;
            }
        }
     }
     return true;
}

// 检查坐标数据合法性, 使用逗号分割 
bool shape_utils::check_coordinate_line(string line)
{
    // 检查字符串长度
    if (!line.size()) {
        return false;
    }

    // 遍历并获取坐标
    vector<string> vcoord{};
    std::string::size_type pos_cur = 0, pos_start = 0;
    while (pos_start !=  string::npos && pos_cur != string::npos) {
        pos_cur = line.find_first_of(',', pos_start);
        if (pos_cur == string::npos) {
            string num_str{line.substr(pos_start)};
            vcoord.push_back(num_str);
        } else {
            string num_str{line.substr(pos_start, pos_cur)};
            vcoord.push_back(num_str);
            pos_start = pos_cur + 1;
        }
    }

    auto vcoord_iter = vcoord.begin();
    for (;vcoord_iter != vcoord.end(); ++ vcoord_iter) {
        if (!check_if_numeric(*vcoord_iter)) {
            return false;
        }
    }

    return true;
}

// 获取坐标 x
double shape_utils::get_coordinate_x(string line)
{
    // 遍历并获取坐标 Y
    vector<string> vcoord = get_coordinate(line);
    return stod(vcoord[0]);
}

// 获取坐标 x
double shape_utils::get_coordinate_y(string line)
{
    // 遍历并获取坐标 X
    vector<string> vcoord = get_coordinate(line);
    return stod(vcoord[1]);
}

// 近似相等
bool shape_utils::is_equal(double numericFirst, double numericSecond, int scale)
{
    return (abs(numericFirst - numericSecond) < pow(10, -1 * scale));
}

// 获取两点之间的距离
double shape_utils::get_distance(shape_point pa, shape_point pb)
{
    return sqrt(pow(pa.get_cord_x()-pb.get_cord_x(), 2) + pow(pa.get_cord_y()-pb.get_cord_y(), 2));
}

// 判断是否是三角形
bool shape_triangle::is_triangle()
{
    // 获取三角形的三条边
    double distance_ab =  shape_utils::get_distance(this->point_a, this->point_b);
    double distance_ac = shape_utils::get_distance(this->point_a, this->point_c);
    double distance_bc = shape_utils::get_distance(this->point_b, this->point_c);

    if ((distance_ab + distance_ac - distance_bc) <= 0) {
        return false;
    }

    if ((distance_bc + distance_ac - distance_ab) <= 0) {
        return false;
    }

    if ((distance_ac + distance_ab - distance_ac) <= 0) {
        return false;
    }

    return true;
}

// 获取三角形的类型
string shape_triangle::get_triangle_type()
{
    double distance_c = shape_utils::get_distance(this->point_a, this->point_b);
    double distance_b = shape_utils::get_distance(this->point_a, this->point_c);
    double distance_a = shape_utils::get_distance(this->point_b, this->point_c);

    double angle_abc = (pow(distance_a, 2) + pow(distance_c, 2) - pow(distance_b, 2)) / ( 2 * distance_a * distance_c);
    double angle_bac = (pow(distance_b, 2) + pow(distance_c, 2) - pow(distance_a, 2)) / ( 2 * distance_b * distance_c);
    double angle_bca = (pow(distance_b, 2) + pow(distance_a, 2) - pow(distance_c, 2)) / ( 2 * distance_b * distance_a);

    angle_abc = acos(angle_abc) * 180.0 / PI;
    angle_bac = acos(angle_bac) * 180.0 / PI;
    angle_bca = acos(angle_bca) * 180.0 / PI;
    if (angle_abc-90.0 >1e-6 || angle_bac - 90.0  > 1e-6 || angle_bca - 90.0 > 1e-6) {
        return "obtuse angle";
    }

    if (shape_utils::is_equal(angle_abc, 90.0, 6) || shape_utils::is_equal(angle_bac, 90.0, 6) || shape_utils::is_equal(angle_bca, 90.0, 6)) {
        return "right angle";
    }

    return "acute angle";
}