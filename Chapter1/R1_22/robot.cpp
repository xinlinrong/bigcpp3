#include <iostream>
#include <string>
#include "robot.hpp"

using namespace std;
using namespace bigcpp::chapter1;

string Robot::get_direction_string(Direction direction)
{
    switch(direction) {
        case Direction::north:
            return "north";
        case Direction::west:
            return "west";
        case Direction::south:
            return "south";
        case Direction::east:
            return "east";
        default:
            return "";
    }
};

// make rebot known what is in front of it
bool Robot::detetct_front()
{
    int row = this->row;
    int column = this->column;

    switch(this->direction) {
        case Direction::north:
            row -= 1;
            break;
        case Direction::south:
            row += 1;
            break;
        case Direction::east:
            column += 1;
            break;
        case Direction::west:
            column -= 1;
            break;
    }

    return this->grass_plot.if_can_pass(row, column);
}

// make rebot move number of count
void Robot::move(int count)
{
    // ignore wrong parameter value
    if (count <= 0) {
        return;
    }

    int index = 0;
    for (index = 0; index < count; ++ index) {
        if (this->detetct_front()) {
            switch(this->direction) {
                case Direction::north:
                    this->row -= 1;
                    break;
                case Direction::south:
                    this->row += 1;
                    break;
                case Direction::east:
                    this->column += 1;
                    break;
                case Direction::west:
                    this->column -= 1;
                    break;
            }
        } else {
            break;            
        }
    }

    cout << "Robot direction is " << this->get_direction_string(this->direction) << endl;
    cout << "Robot actual run " << index << "step" << endl;
    cout << "Now robot coordinates is row:" << this->row << " column:" << this->column << endl; 
}


void Robot::turn_left()
{
    switch(this->direction) {
        case Direction::north:
            this->direction = Direction::west;
            break;
        case Direction::west:
            this->direction = Direction::south;
            break;
        case Direction::south:
            this->direction = Direction::east;
            break;
        case Direction::east:
            this->direction = Direction::north;
            break;
    }
}

void Robot::turn_right()
{
        switch(this->direction) {
        case Direction::north:
            this->direction = Direction::east;
            break;
        case Direction::east:
            this->direction = Direction::south;
            break;
        case Direction::south:
            this->direction = Direction::west;
            break;
        case Direction::west:
            this->direction = Direction::north;
            break;
    }
}