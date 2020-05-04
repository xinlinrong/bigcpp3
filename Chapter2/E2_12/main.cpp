#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    cout << "Please input a interger between 1000 and 999 999:";
    int count{0};
    cin >> count;
    if (count < 1000 || count > 999999) {
        cout << "invalid integer" << endl;
        return 0;
    }
    cout << count / 1000 << "," << count % 1000 << endl;
    return 0;
}
