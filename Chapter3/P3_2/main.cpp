#include <iostream>
#include <cmath>
#include <string>
#include "score.hpp"

using namespace std;
using namespace bigcpp::chapter3;

void test_func()
{
    score sl_01{0};
    cout << "sl_01 is " << sl_01.get_level() << endl;

    score sl_02{0.4};
    cout << "sl_02 is " << sl_02.get_level() << endl;

    score sl_03{0.9};
    cout << "sl_03 is " << sl_03.get_level() << endl;

    score sl_04{1.0};
    cout << "sl_04 is " << sl_04.get_level() << endl;

    score sl_05{1.2};
    cout << "sl_05 is " << sl_05.get_level() << endl;

    score sl_06{1.5};
    cout << "sl_06 is " << sl_06.get_level() << endl;

    score sl_07{1.8};
    cout << "sl_07 is " << sl_07.get_level() << endl;

    score sl_08{2.0};
    cout << "sl_08 is " << sl_08.get_level() << endl;

    score sl_09{2.4};
    cout << "sl_09 is " << sl_09.get_level() << endl;

    score sl_10{2.8};
    cout << "sl_10 is " << sl_10.get_level() << endl;

    score sl_11{2.9};
    cout << "sl_11 is " << sl_11.get_level() << endl;

    score sl_12{3.0};
    cout << "sl_12 is " << sl_12.get_level() << endl;

    score sl_13{3.3};
    cout << "sl_13 is " << sl_13.get_level() << endl;

    score sl_14{3.4};
    cout << "sl_14 is " << sl_14.get_level() << endl;

    score sl_15{3.6};
    cout << "sl_15 is " << sl_15.get_level() << endl;

    score sl_16{3.8};
    cout << "sl_16 is " << sl_16.get_level() << endl;

    score sl_17{3.9};
    cout << "sl_17 is " << sl_17.get_level() << endl;

    score sl_18{4.0};
    cout << "sl_18 is " << sl_18.get_level() << endl;
}

int main(int argc, char **argv) {
    /*
    cout << "enter a score: ";
    double score_in{0.0};
    cin >> score_in;

    if (cin.fail()) {
        cout << "variable score_in is not available" << endl;
        return -1;
    }
    if (score_in > 4.0 || score_in < 0) {
        cout << "value of variable score_in is invalid" << endl;
        return -1;
    }

    score score_level{score_in}; 
    cout << "score_level is " << score_level.get_level() << endl;
*/
    test_func();
    return 0;
}