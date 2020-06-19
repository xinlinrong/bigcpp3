#include <iostream>
#include <string>

using namespace std;

// 练习 4-8
int prog_e4_8()
{
    cout << "Please enter a word:";
    string word{};
    cin >> word;
    for (int i = 0; i < word.size(); ++i) {
        cout << word[i] << endl;
    }

    return 0;
}

// 练习 4-9
int prog_e4_9()
{  
    cout << "Please enter a word:";
    string word{};
    cin >> word;
    for (int i = word.size(); i >=0; --i) {
        cout << word[i];
    }
    cout << endl;

    return 0;
}

// 练习 4-10
int prog_e4_10()
{
    int vowels_cnt{0};
    cout << "Please enter a word:";
    string word{};
    cin >> word;

    for (int i = 0; i < word.size(); ++i) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'y') {
            ++ vowels_cnt;
        }
    }
    cout << vowels_cnt << " vowels" << endl;;
    return 0;
}

// 练习 4-11
int prog_e4_11()
{
    cout << "Please enter a word:";
    string word{};
    cin >> word;

    int vowels_cnt{0};
    for (int i = 0; i <= word.size(); ++i) {
        if (i != word.size() - 1) {
            if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'y') {
                ++ vowels_cnt;
            }
        } else {
            if (word[i] == 'a' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'y') {
                ++ vowels_cnt;
            }
        }
    }
    vowels_cnt = vowels_cnt ? vowels_cnt  : 1; 
    cout << vowels_cnt << " vowels" << endl;;
    return 0;
}

int main(int argc, char ** argv)
{
    cout << "Please enter excerise num(8,9,10,11):";
    int exec_num{0};
    cin >> exec_num;

    switch (exec_num) {
        case 8:
            prog_e4_8();
            break;
        case 9:
            prog_e4_9();
            break;
        case 10:
            prog_e4_10();
            break;
        case 11:
            prog_e4_11();
            break;
        default:
            cout << "Not implement" << endl;
            break;
    }
    return 0;
}