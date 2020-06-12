#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int resolve_method_01()
{
    srand(time(0));
    int retry_times = 100000000;
    int hit_area1 = 0, hit_area2 = 0, hit_area3 = 0; // 访问区域
    for (int i = 0; i < retry_times; ++i) {
        int hit_number = rand() % 15 + 1;
        if (hit_number <= 10) {
            ++hit_area1;
        } else if (hit_number >= 11 && hit_number <= 13) {
            ++hit_area2;
        } else {
            ++hit_area3;
        }
    }

    cout << "p of hit area 1 is: " << hit_area1 << "/" << retry_times << endl;
    cout << "p of hit area 2 is: " << hit_area2 << "/" << retry_times << endl;
    cout << "p of hit area 3 is: " << hit_area3 << "/" << retry_times << endl;
}

int main(int argc, char **argv)
{
    return resolve_method_01();
}