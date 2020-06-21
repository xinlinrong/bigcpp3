#include <iostream>
#include <string>

using namespace std;
int main(int argc, char **argv)
{
    cout << "Please enter your word:";
    string word{};
    cin >> word;

    int word_size = word.size();
    for (int i =1; i <= word_size; ++ i) {
        for (int j = 0; j < word_size; ++j) {
            string sub_word = word.substr(j, i);
            if (sub_word.size() >= i) {
                cout << sub_word << endl;
            }
        }
    }

    return 0;
}