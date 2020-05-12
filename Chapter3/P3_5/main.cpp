#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int main(int argc, char **argv) {
    cout << "Enter three strings: ";
    string line{};
    getline(cin, line);

    vector<string> vstr{};
    std::string::size_type start_index{0}, end_index{0};
    while (start_index != string::npos) {
        start_index = line.find_first_not_of(" ", start_index);
        end_index = line.find_first_of(" ", start_index);
        if (start_index == string::npos) {
            break;
        } else if (end_index == string::npos) {
            vstr.push_back(line.substr(start_index));
            break;
        } else {
            vstr.push_back(line.substr(start_index, end_index - start_index));
            start_index = end_index + 1;
        }
    }

    if (vstr.size() == 0) {
        cout << "String Vector is empty." << endl;
    } else {
        sort(vstr.begin(), vstr.end(), [](string str_before, string str_after){return (str_before <= str_after);});
        auto iter = vstr.begin();
        for (iter = vstr.begin(); iter != vstr.end(); ++iter) {
            cout << *iter << endl;
        }
    }
    return 0;
}