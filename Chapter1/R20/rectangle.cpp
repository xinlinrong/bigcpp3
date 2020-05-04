#include <iostream>

#include "rectangle.hpp"

using namespace std;
using namespace bigcpp::chapter1;

int R1_20_Rectangle::validate_checkin()
{
    // check rows and columns
    if (this->rows <=0 || this->columns <= 0) {
        cout << "R1_20_Rectangle parameter rows or parameter columns must be greater than 0" << endl;
        return 0;
    }

    int mblocks2 = 2;
    int mblocks3 = 3;

    // match for mblock2
    if ((this->columns - mblocks2) % 2 == 0) {
        if ((this->columns - mblocks2 - 2) <= 0) {
            cout << "R1_20_Rectangle parameter rows or parameter columns are not match" << endl;
            return 0;
        } else {
            this->dist = (this->columns - mblocks2 - 2) / 2;
        }
    } else if ((this->columns - mblocks3) % 2 == 0) {
        if ((this->columns - mblocks3 - 2) <= 0) {
            cout << "R1_20_Rectangle parameter rows or parameter columns are not match" << endl;
            return 0;
        } else {
            this->dist = (this->columns - mblocks3 - 2) / 2;
        }
    }

    if (3 + 2 * this->dist != this->rows) {
        cout << "R1_20_Rectangle parameter rows or parameter columns are not match" << endl;
        return 0;
    }

    return 1;
}

void R1_20_Rectangle::draw()
{
    int current_row = 0;
    int current_column = 0;
    
    for (current_row = 0; current_row < this->rows; ++ current_row) {
        for (current_column = 0; current_column < this->columns; ++ current_column) {
            // first line, last line print 1
            if (current_row == 0 || current_row == this->rows - 1) {
                cout << "1";
                continue;
            }

            // handle other lines
            if (current_row > 0 && current_row < this->rows) {
                // line first and line end print 1
                if (current_column == 0 || current_column == this->columns - 1) {
                    cout << "1";
                    continue;
                } else {
                    if ((current_row == this->rows/2) && (current_column >= this->columns/2-1) && (current_column <= this->columns/2 + (this->columns%2))) {
                        cout << "1";
                    } else {
                        cout << "0";
                    }
                }
            }
        }
        cout << endl;
    }
}