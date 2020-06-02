#include <iostream>
#include <string>

using namespace std;

static void section_a()
{
    int i = 0;
    int j = 10;
    while (i < j) {
        cout << i << " " << j << endl;
        i ++;
        j--;
    }
}

static void section_b()
{
    int i = 0;
    int j = 10;
    while (i < j) {
        cout << i +  j << endl;
        i ++;
        j--;
    }
}

int main(int argc, char **argv)
{
    string section_name{};
    cout << "Please enter section name(a, b):";
    cin >> section_name;
    if (section_name == "a") {
        section_a();
    } else if (section_name == "b") {
        section_b();
    } else {
        cout << "Not implement" << endl;
    }
}