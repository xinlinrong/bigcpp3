#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) {
    int index = 0;
    string input_name;

    string output_first_line = "";
    string output_middle_line = "";
    string output_last_line = "";
    
    cout << "Please Input your name:";
    cin >> input_name;
    cout << endl;
    
    output_first_line.append(1, '+').append(input_name.size() + 2, '-').append(1, '+');
    output_last_line.append(1, '+').append(input_name.size() + 2, '-').append(1, '+');
    output_middle_line.append(1, '|').append(1, ' ').append(input_name).append(1, ' ').append(1, '|');

    cout << output_first_line << endl;
    cout << output_middle_line << endl;
    cout << output_last_line << endl;

    return 0;
}