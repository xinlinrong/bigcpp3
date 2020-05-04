#include <iostream>
#include <string>
#include "moss.hpp"

using namespace std;
using namespace bigcpp::chapter1;

int main(int argc, char **argv) {
    string name;
    cout << "Please Input your name:" << std::endl;
    getline(cin, name);
    cout << endl;

    MossTable moss_table{};
    cout << "Output moss string is :" << moss_table.getString(name) << endl;
    return 0;
}
