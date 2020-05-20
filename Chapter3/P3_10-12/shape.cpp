#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <utility>

#include "shape.hpp"

using namespace chapter3::shape;

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