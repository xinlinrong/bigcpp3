#ifndef _robot_hpp_
#define _robot_hpp_ 1

#include <string>
#include "grassplot.hpp"

using namespace bigcpp::chapter1;

namespace bigcpp {
    namespace  chapter1 {

        enum class Direction {north, east, south, west};
        
        class Robot
        {
        private:
            Direction direction;
            int row;
            int column;
            GrassPlot grass_plot;
            string get_direction_string(Direction direction);
        public:
            Robot(Direction direction, int row, int column, GrassPlot grass_plot):direction {direction}, row{row}, column{column}, grass_plot {grass_plot}{}
            bool detetct_front();
            void move(int count);
            void turn_left();
            void turn_right();
        };
    } // namespace 
} // namespace

#endif