#ifndef _shape_hpp_
#define _shape_hpp_ 1

#include <iostream>
#include <string>

using namespace std;

namespace chapter3 {
namespace shape {
    // 杂类
    class shape_utils
    {
        private:
            // 获取坐标
            static vector<string> get_coordinate(string line);
        public:
            // 检查是否是数字
            static bool check_if_numeric(string line);
            // 检查坐标字符串
            static bool check_coordinate_line(string line);
            // 获取 x 坐标
            static double get_coordinate_x(string line);
            // 获取 y 坐标
            static double get_coordinate_y(string line);
    };

    class shape_point
    {
        private:
            double cord_x = 0.0;
            double cord_y = 0.0;
        public:
            shape_point(double x, double y):cord_x{x}, cord_y{y}{};
            inline double get_cord_x(){return this->cord_x;};
            inline double get_cord_y(){return this->cord_y;};
    };
} // namespace
} // namespace 

#endif