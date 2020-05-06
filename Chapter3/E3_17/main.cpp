#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;
int main(int argc, char **argv) {
    cout << "Please input a char (a-z or A-Z):";
    string ch{};
    cin >> ch;

    if (ch.size() > 1) {
        cout << "Input char is too long." << endl;
        return -1;
    }

    if (!(ch[0] >= 'a' && ch[0] <= 'z') && !(ch[0] >= 'A' && ch[0] <= 'Z')) {
        cout << "Input char must be value in a-z or A-Z" << endl;
        return -1;
    }

    bool is_vowel = false;
    switch(tolower(ch[0])) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            is_vowel = true;
            break;
        default:
            is_vowel = false;
            break;
    }

    cout << (is_vowel ? "Vowle" : "Consonant") << endl;
    return 0;
}
