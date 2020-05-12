#include <iostream>
#include <string>
#include <cmath>

const int DOUBLE_NUMBERS = 3;

using namespace std;
int main(int argc, char ** argv)
{
  string line{};

  cout << "Enter your numbers:";
  getline(cin, line);

  if (line.size() == 0) {
    cout << "line content can not be empty" << endl;
    return -1;       
  } else {
    int index = 0;
    int offset = 0;
    string::size_type size;
    double numbers[DOUBLE_NUMBERS];
    for (index = 0; index < DOUBLE_NUMBERS; ++ index) {
        if (index == 0) {
            numbers[index] = stod(line, &size);
            offset = size;
        } else {
            numbers[index] = stod(line.substr(offset), &size);
            offset += size;
        }
        if (size == line.size()) {
            break;
        }
    }
    for (index = 0; index < DOUBLE_NUMBERS; ++ index) {
        cout.precision(12);
        cout << numbers[index] << endl;
    }
  }
  return 0;
}

