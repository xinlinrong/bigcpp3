#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv) {
    cout << "Please input long of rectangle:";
    double long_of_rectangle{0.0};
    cin >> long_of_rectangle;
    cout << "Please input width of rectangle:";
    double width_of_rectangle{0.0};
    cin >> width_of_rectangle;

    cout << "The primeter of rectangle is:" << 2 * (long_of_rectangle + width_of_rectangle) << endl;
    cout << "The area of rectangle is:" << (long_of_rectangle * width_of_rectangle) << endl;
    cout << "The length of diagonal lines is:" << sqrt(pow(long_of_rectangle, 2) + pow(width_of_rectangle, 2)) << endl;
    return 0;
}
