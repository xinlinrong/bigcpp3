#include <vector>
#include "map.hpp"

using namespace std;
using namespace bigcpp::chapter1;

bool Map::check_in_range(int row, int column)
{
    if (row < 0 || column < 0) {
        return false;
    }

    if (row * this->columns + column >= this->rows * this->columns) {
        return false;
    }
    
    return true;
}


/**
 * method: is_pass
 * @param int row
 * @param int column
 * @return bool
 */
bool Map::is_pass(int row, int column)
{
    return  (this->check_in_range(row, column)) && (row) && (this->mibs[row * this->columns + column].get_item_type() == Map_item_type::PASS);
}

/**
 * method: is_window
 * @param int row
 * @param int column
 * @return bool
 */
bool Map::is_window(int row, int column)
{
    return (this->check_in_range(row, column)) && (this->mibs[row * this->columns + column].get_item_type() == Map_item_type::WINDOW);
}

/**
 * method: is_wall
 * @param int row
 * @param int column
 * @return bool
 */
bool Map::is_wall(int row, int column)
{
    return  (this->check_in_range(row, column)) && (this->mibs[row * this->columns + column].get_item_type() == Map_item_type::WALL);
}

/**
 * method: Map_builder
 * @param int rows
 * @param int columns
 * @param vector<Map_item_config> 
 */
Map Map_generator::create(int rows, int columns, const vector<Map_item_config> &vmic)
{
    int row = 0, column = 0, index = 0;
    vector<Map_item_base> vmib{};

    // assign whole vectors
    for (row = 0; row < rows; ++ row) {
        for (column = 0; column < columns; ++ column) {
            if (row == 0 || row == rows -1 || column == 0 || column == columns -1) {
                Map_item_wall wall{row, column, 0, 0};
                vmib.push_back(wall);
            } else {
                Map_item_pass pass{row, column, 0, 0};
                vmib.push_back(pass);
            }
        }
    }

    // assign vector of window
    for (auto it = vmic.begin(); it != vmic.end(); ++ it) {
        switch (it->item_type) {
            case Map_item_type::WINDOW:
                Map_item_window w {it->row, it->column, it->item_id, it->item_union_id};
                vmib[it->row * columns + it->column] = w;
                break;
        }
    }
    
    Map map{rows, column, vmib};
    return map;
}