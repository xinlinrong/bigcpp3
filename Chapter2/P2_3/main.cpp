#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char **argv) {
    const int max_discount = 75;

    int movie_rentals{0};
    int promotion_members{0};
    double current_discount {0};

    cout << "Enter the number of movie rentals:";
    cin >> movie_rentals;
    cout << "Enter the number of members referred to video club:";
    cin >> promotion_members;

    current_discount = ((movie_rentals + promotion_members) >= max_discount) ? max_discount : (movie_rentals + promotion_members);
    cout << "The discount is equal to: " << setw(4) << setprecision(4) << current_discount << " precent"  << endl;
    return 0;
}
