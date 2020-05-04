#include <iostream>
#include <vector>
#include <stdexcept>
#include "grassplot.hpp"

using namespace std;
using namespace bigcpp::chapter1;

/**
 * initialize grassplot
 */
void GrassPlot::initialize()
{
    if (this->columns < 3 || this->rows < 3) {
        throw logic_error("rows or columns must great than 0");
    }

    
    int row = 0, column  = 0;
    for (row = 0; row < this->rows; ++ row) {
        for (column = 0; column < this->columns; ++ column) {
            if (row == 0 || row == this->rows - 1 || column == 0 || column == this->columns - 1) {
                Barrier b{row, column, this->rows, this->columns};
                this->vgpos.push_back(b);
            } else {
                Grass g{row, column, this->rows, this->columns};
                this->vgpos.push_back(g);
            }
        }
    }
}

/**
 * check if current block can pass
 */
bool GrassPlot::if_can_pass(int row, int column)
{
    if (row < 0 || column < 0) {
        return false;
    }

    int index = this->get_index(row, column);
    if (index > this->vgpos.size()) {
        return false;
    }

    GrassPlotObject gpo = this->vgpos[index];
    return gpo.if_can_pass();
}