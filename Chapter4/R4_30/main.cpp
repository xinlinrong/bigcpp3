#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(int argc, char **argv)
{
    srand(time(0));
    int hour = rand() % 24;

    srand(time(0));
    int minute = rand() % 60;

    cout << "random time is " << hour << ":" << minute << endl;
    return 0;
}