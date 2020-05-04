#ifndef _robot_hpp_
#define _robot_hpp_ 1

#include <vector>

using namespace std;

namespace bigcpp {
    namespace chapter1 {

        /**
         * class: Destination
         * description: destination enum
         */
        enum class Destination {north, east, south, west}; 

        class Robot {
        private:
            int row = 0;
            
            int column = 0;
            
            Destination destination = Destination::south;

            /**
            * @method: get_move_row_coordinate_by_destination
            * @desc: get movement step count by destination
            * @param enum Destination
            * @return int
            */
            inline int get_move_row_coordinate_by_destination(Destination destination)
            {
                int row = 0;
                switch(destination) {
                    case Destination::south:
                        row = 1;
                        break;
                    case Destination::north:
                        row = -1;
                        break;
                    default:
                        row = 0;
                }
                return row;
            }

            /**
            * @method: get_move_row_coordinate_by_destination
            * @desc: get movement step count by destination
            * @param enum Destination
            * @return int
            */
            inline int get_move_column_coordinate_by_destination(Destination destination)
            {
                int column = 0;
                switch(destination) {
                    case Destination::east:
                        column = 1;
                        break;
                    case Destination::west:
                        column = -1;
                        break;
                    default:
                        column = 0;
                }
                return column;
            }

        public:
            explicit Robot(int row, int column, Destination destination):row{row}, column{column}, destination{destination}{};

            inline int get_row() {return this->row;};

            inline int get_column() {return this->column;}

            inline int get_next_move_row() {return this->get_move_row_coordinate_by_destination(this->destination) + this->row;};

            inline int get_next_move_column() {return this->get_move_column_coordinate_by_destination(this->destination) + this->column;};
           
            void move();
            
            void turn_left();

            void turn_right();
        };
        
    } // namespace
} // namespace

#endif