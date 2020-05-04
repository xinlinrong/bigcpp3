#include <iostream>

#include "robot.hpp"
#include "grassplot.hpp"

using namespace std;
using namespace bigcpp::chapter1;

int main(int argc, char **argv) {
    // initialize grassplot
    GrassPlot gp{9, 12};
    gp.initialize();
    cout << "GrassPlot initialize finished." << endl;
    
    // initialize robot
    Robot robot {Direction::north, 7, 1, gp};
    cout << "Robot initialize finished." << endl;
    
    int stop_flag = 0;
    int move_count = 0;
    string cmd_str {};

    while (true) {
        cout << "Waiting for your command:" << endl;

        cin >> cmd_str;
        cmd_str.
        if (cmd_str == "move") {
            cout << "Please input move steps:";
            cin >> move_count;
            robot.move(move_count);
        } else if (cmd_str == "left") {
            robot.turn_left();
        } else if (cmd_str == "right") {
            robot.turn_right();
        } else if (cmd_str == "stop") {
            break;
        } else {
            cout << "Robot doesn't known your directive";
        }
        cout << endl << endl;
        if (stop_flag == 1) {
            break;
        }
    }

    return 0;
}