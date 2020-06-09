#include <iostream>
#include <string>
using namespace std;
int main(int argc, char **argv)
{
    cout << "Please enter width:";
    int width{0};
    cin >> width;
    if (cin.fail() || width <= 0) {
        cout << "Parameter width is not a valid value." << endl;
        return -1;
    }

    cout << "Please enter height:";
    int height{0};
    cin >> height;
    if (cin.fail() || height <= 0) {
        cout << "Parameter height is not a valid value." << endl;
        return -1;
    }

    for (int i = 0; i < width * height; ++i) {
        if (i % width == 0 && i > 0) {
            cout << endl;
        }
        cout << "*";
    }
    cout << endl;;
    return 0;
}