#include <iostream>
#include <string>

using namespace std;

// 根据频率获取波长
string get_wave_from_hertz(double hertz)
{
    string desc;
    if (hertz < 3E9) {
        desc = "无线电波, > 10^-1, < 3x10^9";
    } else if (hertz >= 3E9 && hertz <= 3E11) {
        desc = "微波, > 10^-3 ~ 10^-1, 3x10^9 ~ 3x10^11";
    } else if (hertz > 3E11 && hertz <= 4E14) {
        desc = "红外线, > 7x10^-1 ~ 10^-3, > 3x10^11 ~ 4 x10^14";
    } else if (hertz > 4E14 && hertz <= 7.5E14) {
        desc = "可见光, > 4x10^-7 ~ 7x10^-7, > 4x10^14 ~ 7.5 x10^14";
    } else if (hertz > 7.5E14 && hertz <= 3E16) {
        desc = "紫外线, > 10^-8 ~ 4x10^-7, > 7.4x10^14 ~ 3 x10^16";
    } else if (hertz > 3E16 && hertz <= 3E19) {
        desc = "X射线, > 10^-11 ~ 10^-8, > 3x10^16 ~ 3 x10^19";
    } else if (hertz >= 3E19) {
        desc = "伽玛射线, < 10^-11, > 3 x10^19";
    }
    return desc;
}

// 根据波长获取频率
string get_hertz_from_wave(double wave_long)
{
    string desc;
    if (wave_long > 1E-1) {
        desc = "无线电波, > 10^-1, < 3x10^9";
    } else if (wave_long > 1E-3 && wave_long <= 1E-1) {
        desc = "微波, > 10^-3 ~ 10^-1, 3x10^9 ~ 3x10^11";
    } else if (wave_long >= 7E-1 && wave_long < 1E-3) {
        desc = "红外线, > 7x10^-1 ~ 10^-3, > 3x10^11 ~ 4 x10^14";
    } else if (wave_long >= 4E-7 && wave_long < 7E-7) {
        desc = "可见光, > 4x10^-7 ~ 7x10^-7, > 4x10^14 ~ 7.5 x10^14";
    } else if (wave_long >= 1E-8 && wave_long < 4E-7) {
        desc = "紫外线, > 10^-8 ~ 4x10^-7, > 7.4x10^14 ~ 3 x10^16";
    } else if (wave_long >= 1E11 && wave_long <= 1E-8) {
        desc = "X射线, > 10^-11 ~ 10^-8, > 3x10^16 ~ 3 x10^19";
    } else if (wave_long <= 1E-11) {
        desc = "伽玛射线, < 10^-11, > 3 x10^19";
    }
    return desc;
}

int main(int argc, char **argv)
{
    string choice{};
    cout << "Please enter your selection(wave|hertz):";
    cin >> choice;
    string desc{};
    if (choice == "wave") {
        cout << "Please enter wave value:";
        double wave_long{0.00};
        cin >> wave_long;
        desc = get_hertz_from_wave(wave_long);
    } else {
        cout << "Please enter hertz value:";
        double hertz{0.00};
        cin >> hertz;
        desc = get_wave_from_hertz(hertz);
    }
    cout << desc << endl;
    return 0;
}