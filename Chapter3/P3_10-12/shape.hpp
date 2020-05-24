#ifndef _shape_hpp_
#define _shape_hpp_ 1

#include <iostream>
#include <string>

using namespace std;

namespace chapter3 {
namespace shape {
    // 坐标点
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
            // 近似相等
            static bool is_equal(double numericFirst, double numericSecond, int scale);
            // 获取两点之间的距离
            static double get_distance(shape_point pa, shape_point pb);
           // 判断两个点是否相等
           static bool is_equal_point(shape_point pa, shape_point pb);
    };

    // 三角形
    class shape_triangle
    {
        private:
            shape_point point_a;
            shape_point point_b;
            shape_point point_c;
        public:
            // 构造函数
            shape_triangle(shape_point pa, shape_point pb, shape_point pc):point_a{pa}, point_b{pb}, point_c{pc}{};
            // 判断是否为三角形
            bool is_triangle();
            // 获取三角形的类型
            string get_triangle_type();
    };

    // 四边形
    class shape_quadrilateral
    {
        private:
            // 点
            shape_point point_a;
            shape_point point_b;
            shape_point point_c;
            shape_point point_d;
            // 角度
            double angle_dab{0.00};
            double angle_abc{0.00};
            double angle_bcd{0.00};
            double angle_cda{0.00};
            // 直线长度
            double distance_ab{0.00};
            double distance_bc{0.00};
            double distance_cd{0.00};
            double distance_da{0.00};
        public:
            shape_quadrilateral(shape_point pa, shape_point pb, shape_point pc, shape_point pd):point_a{pa}, point_b{pb}, point_c{pc}, point_d{pd}{};
            static bool check_avaliable(shape_point pa, shape_point pb, shape_point pc, shape_point pd);
            static bool check_triangle_3point(shape_point pa, shape_point pb, shape_point pc);
            void init();
            string get_quadrilateral_type();  
    };
} // namespace
} // namespace 

#endif