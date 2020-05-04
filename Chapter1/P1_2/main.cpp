#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) {
    string user_name;
    
    cout << "Hello, my name is Hal!" << endl;
    cout << "What is your name?" << endl;
    getline(cin, user_name);
    cout << "Hello, " << user_name << " I'm glad to meet you!" << endl;
    return 0;
}
