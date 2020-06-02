#include <iostream>
#include <string>

using namespace std;

const string stars = "*****"; 
const string stripes = "=====";

// R4_1 复习题 a
static void section_a()
{
    int i = 0;
    while (i < 5) {
        cout << stars.substr(0, i) << endl;
        i++;
    }
}

// R4_1 复习题 b
static void section_b()
{
    int i = 0;
    while (i < 5) {
        cout << stars.substr(0, i);
        cout << stripes.substr(i, 5 - i) << endl;
        i++;
    }
}

// R4_1 复习题 c
static void section_c()
{
    int i = 0;
    while (i < 10) {
        if (i % 2) {
            cout << stars << endl;
        } else {
            cout << stripes << endl;
        }
        i ++;
    }
}

int main(int argc, char ** argv)
{
    string section_name{};
    cout << "Please enter section(a, b, c):";
    cin >> section_name;
    if (section_name == "a") {
        section_a();
    } else if (section_name == "b") {
        section_b();
    } else if (section_name == "c") {
        section_c();
    } else {
        cout << "Not implement" << endl;
    }
}