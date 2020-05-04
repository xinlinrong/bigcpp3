#include <iostream>
using namespace std;

void print_side()
{
    cout << "|  |  |  |" << endl;
}

void print_line()
{
    cout << "+--+--+--+" << endl;
}

int main(int argc, char **argv) {
    const int max_line = 7;
    int index = 0;
    for (index = 0; index < max_line; ++ index) {
        if (index % 2 == 0) {
            print_line();
        } else {
            print_side();
        }
    }
}
