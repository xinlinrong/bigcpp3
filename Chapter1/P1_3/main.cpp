#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(int argc, char **argv) {
    map<char, string> letter_map{};

    letter_map['L'] = "*\n*\n*\n*\n*\n******";
    cout << letter_map['L'] << endl;
    return 0;
}
