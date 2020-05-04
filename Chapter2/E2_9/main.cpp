#include <iostream>

using namespace  std;

int main(int argc, char **argv) {
    const int cents_of_one_dollor = 100;
    const int cents_of_quarter_dollor = 25;

    int paper_currency_amont{0};
    int coins_currency_count{0};
    double bill_of_good_item{0};

    cout << "Please input bill of good items:";
    cin >> bill_of_good_item;
    
    cout << "Please input paper currency amount:";
    cin >> paper_currency_amont;

    cout << "Please input coins currency count:";
    cin >> coins_currency_count;

    int change_of_deal{0};
    int change_of_paper_count{0};
    int change_of_coins_count{0};
    change_of_deal = paper_currency_amont * cents_of_one_dollor + coins_currency_count * cents_of_quarter_dollor - (bill_of_good_item * cents_of_one_dollor) + 0.5;
    change_of_paper_count = change_of_deal / cents_of_one_dollor;
    change_of_deal = change_of_deal % cents_of_one_dollor;
    change_of_coins_count = change_of_deal / cents_of_quarter_dollor;

    cout << "Dollor coins: " << change_of_paper_count << endl;
    cout << "Quarter coins: " << change_of_coins_count << endl;
    return 0;
}
