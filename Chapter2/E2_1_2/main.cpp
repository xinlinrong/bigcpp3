#include <iostream>
#include <cmath>

using namespace std;

const double INCHES_FOR_MM = 25.4;
const double LETTER_WIDTH_INCHES = 8.5;
const double LETTER_LONG_INCHES = 11.0;

int main(int argc, char **argv) {
    cout << "size of letter" << endl;
    cout << "width: " << LETTER_WIDTH_INCHES * INCHES_FOR_MM << "mm" << endl;
    cout << "long:" << LETTER_LONG_INCHES * INCHES_FOR_MM << "mm" << endl;

    cout << "circumference is: " << 2 * (LETTER_WIDTH_INCHES + LETTER_LONG_INCHES) * INCHES_FOR_MM << "mm" << endl;;
    cout << "diagonal is: " << sqrt(pow(LETTER_WIDTH_INCHES * INCHES_FOR_MM, 2) + pow(LETTER_LONG_INCHES * INCHES_FOR_MM, 2)) << "mm";
    return 0;
}
