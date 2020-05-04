#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) {
    string user_input;

    cout << "Hello, my name is Hal." << endl;
    cout << "What would you like me to do?" << endl;
    getline(cin, user_input);
    cout << "I'm sorry, I can't do that." << endl;
    return 0;
}
