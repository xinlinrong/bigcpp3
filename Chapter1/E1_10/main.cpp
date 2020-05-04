#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) {
    cout << "Sales Tax Rates" << endl;
    cout << "-----------------" << endl;
    cout.fill(' ');
    cout.width(13);
    cout << std::left << "Alabama:" << std::right << "4%" << endl;
    cout.width(13);
    cout << std::left << "Alaska:" << std::right << "0%" << endl;
    cout.width(13);
    cout << std::left << "Arizona:" << std::right << "5.6%" << endl;    
    cout.width(13);
    cout << std::left << "Arkansas:" << std::right << "6%" << endl;   
    cout.width(13);
    cout << std::left << "California:" << std::right << "6%" << endl;       
}