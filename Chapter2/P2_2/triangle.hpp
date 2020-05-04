#ifndef _triangle_hpp_
#define _triangle_hpp_ 1

namespace bigcpp {
    namespace chapter2 {
        class Point
        {
        private:
            double x{0.0};
            double y{0.0};
        public:
            Point(double x, double y): x{x}, y{y}{};
            inline double get_x(){return this->x;};
            inline double get_y(){return this->y;};
        };

        // class Triangle
        class Triangle
        {
        private:
            Point point_a;
            Point point_b;
            Point point_c;
        public:
            Triangle(Point point_a, Point point_b, Point point_c): point_a{point_a}, point_b{point_b}, point_c{point_c}{};
            bool check_if_valid();
            double get_long_of_ab();
            double get_long_of_ac();
            double get_long_of_bc();
            double get_angle_abc();
            double get_angle_bac();
            double get_angle_acb();
            double get_primeter();
            double get_area();
        };
    } // namespace
} // namespace

#endif