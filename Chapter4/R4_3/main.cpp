#include <iostream>
#include <string>

using namespace std;

static void section_a()
{
    int result = 0;
    for (int i = 1; i <= 10; i++) {
        result = result + i;
    }
    cout << result << endl;
}

static void section_b()
{
    int result = 1;
    for (int i = 1; i <= 10; i++) {
        result = i - result;
    }
    cout << result << endl;
}

static void section_c()
{
    int result =1;
    for (int i = 5; i > 0; i--) {
        result = i * result;
    }
    cout << result << endl;
}

static void section_d()
{
    int result =1;
    for (int i = 1; i <= 10; i*=2) {
        result = i * result;
    }
    cout << result << endl;
}

int main(int argc, char **argv)
{
    string section_name{};
    cout << "Please enter section(a, b, c, d):";
    cin >> section_name;
    if (section_name=="a") {
        section_a();
    } else if (section_name=="b") {
        section_b();
    } else if (section_name=="c") {
        section_c();
    } else if (section_name=="d") {
        section_d();
    } else {
        cout << "Not implement" <<endl;
    }
    return 0;
}