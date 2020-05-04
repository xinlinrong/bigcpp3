#include <iostream>
#include <vector>

#include "robot.hpp"
#include "map.hpp"

using namespace std;
using namespace bigcpp::chapter1;

int main(int argc, char **argv) {

    int rows = 0, columns = 0;

    // input rows;
    cout << "Please input rectangle rows:"; // 11
    cin >> rows;
    cout << endl;

    // input columns;
    cout << "Please input rectangle columns:"; // 12
    cin >> columns;
    cout << endl;
    
    // initialize map
    Map_item_config item_config_1 {0, 3, 0, 1, Map_item_type::WINDOW}; // window 1
    Map_item_config item_config_2 {6, 11, 0, 2, Map_item_type::WINDOW}; // window 2
    Map_item_config item_config_3 {10, 5, 0, 3, Map_item_type::WINDOW}; // window 3
    Map_item_config item_config_4 {5, 0, 0, 4, Map_item_type::WINDOW}; // window 3
    vector<Map_item_config> vmic {item_config_1, item_config_2, item_config_3, item_config_4};
    Map map = Map_generator::create(rows, columns, vmic);
    
    // initialize robot
    int windows = 0, origin_row = 0, origin_column = 0;
    Destination destination = Destination::north;
    Robot robot {7, 3, destination};

    // robot go straight until touch the wall
    while (map.is_pass(robot.get_next_move_row(), robot.get_next_move_column()) == true) {
        robot.move();
    }

    origin_row = robot.get_row();
    origin_column = robot.get_column();
    cout << "origin row is: " << origin_row << ", origin column is :" << origin_column << endl;
    
    int move_step = 0, window_count = 0;
    bool is_front_pass = false;
    
    do {
         do {
            if (map.is_window(robot.get_next_move_row(), robot.get_next_move_column())) {
                ++ window_count;
            }
            robot.turn_right();
        } while (!map.is_pass(robot.get_next_move_row(), robot.get_next_move_column()));

        robot.move();
        robot.turn_left();
        ++ move_step;
        cout << "Move step: " << move_step <<" Now robot row is: " << robot.get_row()<< ", column is :" << robot.get_column() << endl;
    } while (!(robot.get_row() == origin_row && robot.get_column() == origin_column));
    
    cout << "total find window count is: " << window_count << endl;
    return 0;
}
