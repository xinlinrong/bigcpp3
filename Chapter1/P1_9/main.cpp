#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print_column(int width, vector<string> str_cloumns)
{
    if (str_cloumns.size()) {
        for (auto it = str_cloumns.begin(); it != str_cloumns.end(); ++ it) {
            cout.width(width);
            cout.fill(' ');
            cout <<  std::left << *it;
        }
        cout << endl;
    }
}

int main(int argc, char **argv) {

    vector<string> str_cloumns{"name", "type", "primary", "secondary"};
    
    print_column(15, str_cloumns);
    print_column(15, {"Jupiter", "gas", "H2", "He"});
    print_column(15, {"Saturn", "gas", "H2", "He"});
    print_column(15, {"Uranus", "gas", "H2", "He"});
    print_column(15, {"Neptune", "gas", "H2", "He"});
    print_column(15, {"Venus", "plant", "CO2", "N2"});
    print_column(15, {"Mars", "plant", "CO2", "N2"});
    print_column(15, {"Earth", "plant", "N2", "O2"});
    return 0;
}