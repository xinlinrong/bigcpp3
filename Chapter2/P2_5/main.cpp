#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    const double tax_rate{0.075};
    const double dilivery_cost_per_books{2.0};

    int num_of_books{0};
    double amount_of_books{0.0};
    double total_amount{0.0};

    cout << "Price of books is $";
    cin >> amount_of_books;

    cout << "Number of books are ";
    cin >> num_of_books;

    cout << "Tax of books is $" << (tax_rate * amount_of_books) << endl;
    cout << "Dilivery cost of books is $" << (num_of_books * dilivery_cost_per_books) <<endl;
    cout << "Total amount of order is $" << (tax_rate * amount_of_books + num_of_books * dilivery_cost_per_books + amount_of_books) << endl;
    return 0;
}
