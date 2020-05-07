#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// function to check score string
bool check_score_string(string str_score)
{
    if (str_score.size() > 2) {
        cout << "score string size large than 2" << endl;
        return false;
    }

    char letter_part = str_score[0];
    if (!(letter_part >= 'A' && letter_part <= 'F')) {
        cout << "score letter must be A - F" << endl;
        return false;        
    }

    if (str_score.size() == 2) {
        char sign_part = str_score[1];
        if (letter_part == 'F') {
            cout << "letter F without sign '+' or '-'" << endl;
            return false;
        } else {
            if (!(sign_part == '+' || sign_part == '-')) {
                cout << "sign part must be '+' or '-'" << endl;
                return false;
            }
        }
    }

    return true;
}

int main(int argc, char **argv) {
    string score_letter{};
    cout << "Enter a letter grade:";
    cin >> score_letter;
    if (!check_score_string(score_letter)) {
        return -1;
    }

    double main_score{0.0}, extra_score{0.0};
    switch(score_letter[0]) {
        case 'A':
            main_score = 4.0;
            break;
        case 'B':
            main_score = 3.0;
            break;
        case 'C':
            main_score = 2.0;
            break;
        case 'D':
            main_score = 1.0;
            break;
        default:
            main_score = 0.0;
            break;
    }

    if (score_letter[0] != 'F' && score_letter.size() == 2) {
        if (score_letter[1] == '+') {
            extra_score = 0.3;
        } else if (score_letter[1] == '-') {
            extra_score = -0.3;
        }
    }
    main_score += extra_score;
    if (main_score >= 4.0) {
        main_score = 4.0;
    }
    cout << "The numeric value is " << main_score << endl;
    return 0;
}
