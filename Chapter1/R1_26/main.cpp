#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv) {

    double width_ratio = 0.00, height_ratio = 0.00, long_ratio = 0.00;
    double long_inches = 0.00, width_inches = 0.00, height_inches = 0.00;
    
    cout << "Please input inches of your tv: ";
    cin >> long_inches;
    cout << endl;

    cout << "Please input height_ratio: ";
    cin >> width_ratio;
    cout << endl;

    cout << "Please input height_ratio: ";
    cin >> height_ratio;
    cout << endl;

    long_ratio = sqrt(pow(width_ratio, 2) + pow(height_ratio, 2));
    width_inches = long_inches * width_ratio / long_ratio;
    height_inches = long_inches * height_ratio / long_ratio;

    cout << "width inches is : " << width_inches << " and height inches is: " << height_inches << endl;
    
    return 0;
}
