#include <iostream>
#include <string>

using namespace std;
int main(int argc, char **argv) {
    string s = "Hello";
    string t = "World";

    cout << "s.length + t. length " << (s.length() + t.length()) << endl;
    cout << "s.substr(1, 2) " << s.substr(1, 2) << endl;
    cout << "s.substr(s.length()/2, 1) " << s.substr(s.length()/2, 1) << endl;
    cout << "s + t " << s + t << endl;
    cout << "t + s " << t + s << endl;
    return 0;
}
