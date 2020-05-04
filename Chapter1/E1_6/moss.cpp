#include <iostream>
#include <string>
#include <map>

#include "moss.hpp"

using namespace std;
using namespace bigcpp::chapter1;

string MossTable::getString(string str)
{
    if (str.size()) {
        int index = 0;
        string moss_output;
        for (index = 0; index < str.size(); ++ index) {
            if (this->getCode(toupper(str.at(index))) != "") {
                moss_output.append(" ").append(this->getCode(toupper(str.at(index))));
            }
        }
        return moss_output;
    }
    return "";
}