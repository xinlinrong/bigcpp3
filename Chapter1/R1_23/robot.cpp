#include <vector>

#include "robot.hpp"

using namespace std;
using namespace bigcpp::chapter1;

/**
 * @method: move
 * @desc: move to next step
 * @param none
 * @return void
 */
void Robot::move()
{
    this->row += this->get_move_row_coordinate_by_destination(this->destination);
    this->column += this->get_move_column_coordinate_by_destination(this->destination);
}

/**
 * @method: turn_left
 * @desc: turn destination
 * @param none
 * @return void
 */
void Robot::turn_left()
{
    switch(this->destination) {
        case Destination::east:
            this->destination = Destination::north;
            break;
        case Destination::west:
            this->destination = Destination::south;
            break;
        case Destination::south:
            this->destination = Destination::east;
            break;
        case Destination::north:
            this->destination = Destination::west;
            break;
    }
}

/**
 * @method: turn_left
 * @desc: turn destination
 * @param none
 * @return void
 */
void Robot::turn_right()
{
    switch(this->destination) {
        case Destination::east:
            this->destination = Destination::south;
            break;
        case Destination::west:
            this->destination = Destination::north;
            break;
        case Destination::south:
            this->destination = Destination::west;
            break;
        case Destination::north:
            this->destination = Destination::east;
            break;
    }
}