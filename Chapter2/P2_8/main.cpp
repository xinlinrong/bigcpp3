#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    const int cents_of_quarter{25};
    const int cents_of_ten_cents{10};
    const int cents_of_five_cents{5};
    const int cents_of_one_cents{1};
    const int cents_of_one_dollor{100};
    
    double pay_amount{0.0};
    double bill_amount{0.0};

    cout << "The amount you pay is $";
    cin >> pay_amount;
    
    cout << "The bill you should pay is $";
    cin >> bill_amount;
    
    int change_of_cents = (pay_amount - bill_amount) * 100 + 0.5;
    change_of_cents = change_of_cents % cents_of_one_dollor;
    int num_of_quarter_cents = change_of_cents / cents_of_quarter;
    change_of_cents = change_of_cents % cents_of_quarter;
    int num_of_ten_cents = change_of_cents / cents_of_ten_cents;
    change_of_cents = change_of_cents % cents_of_ten_cents;
    int num_of_five_cents = change_of_cents / cents_of_five_cents;
    change_of_cents = change_of_cents % cents_of_five_cents;
    int num_of_one_cents = change_of_cents / cents_of_one_cents;
    cout << "Change is $" << (pay_amount - bill_amount) << endl;
    cout << "The number of 25 cents is " << num_of_quarter_cents << endl; 
    cout << "The number of 10 cents is " << num_of_ten_cents << endl;
    cout << "The number of 5 cents is " << num_of_five_cents << endl;
    cout << "The number of 1 cents is " << num_of_one_cents << endl;
    
    return 0;
}
