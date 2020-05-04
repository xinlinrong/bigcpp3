#include <iostream>
using namespace std;
int main(int argc, char **argv) {
    int x=0, y=0;
    cout << "Please enter two numbers:";
    cin >> x, y;
    cout << "The sum of" << x << " and " << y << "is: " << x + y << endl;
    return 0;
}
/*
int main(int argc, char **argv) {
    cout << "Please enter two numbers:"
    cin << x, y;
    cout << "The sum of << x << " and " << y
            << "is: " x + y << endl;
    return;
}
*/