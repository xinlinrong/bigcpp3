#include <iostream>
#include <string>

using namespace std;

string format_tel_no(string tel_no)
{
    string format_tel_no{};
    format_tel_no.append("(");
    format_tel_no.append(tel_no.substr(0, 3));
    format_tel_no.append(")");
    format_tel_no.append(tel_no.substr(3, 3));
    format_tel_no.append("-");
    format_tel_no.append(tel_no.substr(6, 4));
    return format_tel_no;
}

int main(int argc, char **argv) {
    string tel_no;
    cout << "Please input telephone numbers (10):";
    cin >> tel_no;
    if (tel_no.length() != 10) {
        cout << "Telephone numbers must be 10 number" << endl;
        return -1;
    }
    cout << "Formated telephone number " << tel_no << " is: " <<  format_tel_no(tel_no) << endl;
    return 0;
}
