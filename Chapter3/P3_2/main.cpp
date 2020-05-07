#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main(int argc, char **argv) {
    const double extra_score_plus{0.2};
    const double extra_score_sub{-0.2};
    const double score_a{4.0}, score_b{3.0}, score_c{2.0}, score_d{1.0}, score_f{0.0};

    cout << "enter a score: ";
    double score_in{0.0};
    cin >> score_in;

    if (cin.fail()) {
        cout << "variable score_in is not available" << endl;
        return -1;
    }
    if (score_in > 4.0 || score_in < 0) {
        cout << "value of variable score_in is invalid" << endl;
        return -1;
    }

    return 0;
}
