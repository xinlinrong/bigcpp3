// Example program
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Example program
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int rows{11};
    int columns{11};
    vector<int> v(121, 0);


    int i = 0;
    int c = 0;
    int r = 0;

    int row_start = 0;
    int row_end = 0;
    int column_start = 0;
    int column_end = 0;

    for (i = 0; i <= rows/4; ++ i) {
        row_start = 2 * i;
        row_end = rows - 1 - 2 * i;
        column_start = 2 * i;
        column_end = rows - 1 - 2 * i;
    
        cout << "row_start is " << row_start << endl;
        cout << "row_end is " << row_end << endl;
        cout << "column_start is " << column_start << endl;
        cout << "column_end is " << column_end << endl;
    
        for (c = column_start; c <= column_end; ++c) {
            v[row_start * columns + c] = 1;
            v[row_end * columns + c] = 1;
        }
    
        for (r = row_start; r <= row_end; ++r) {
            v[r * columns + column_start] = 1;
            v[r* columns + column_end] = 1;
        }
    }

    for (c = 0; c < rows; ++ c) {
        for (r = 0; r < columns; ++ r) {
            cout << v[c * columns + r];
        }
        cout << endl;
    }
    return 0;
}