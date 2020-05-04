#include <iostream>
#include <string>

using namespace std;
int main(int argc, char **argv) {
    string drive_name;
    string path_name;
    string file_name;
    string extension_name;

    cout << "Please input drive name: ";
    cin >> drive_name;
    cout << "Please input path name: ";
    cin >> path_name;
    cout << "Please input file name: ";
    cin >> file_name;
    cout << "Please input extension_name: ";
    cin >> extension_name;

    string full_file_name = drive_name  + path_name + "/" + file_name + "." + extension_name;
    cout << "The full file name is " << full_file_name;
    return 0;
}
