#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    int dollors{0};
    int cents{0};
    double price{0.0};

    cout << "Please input price $";
    cin >> price;

    price = price * 100;
    dollors = price / 100;
    cents = price - dollors * 100 + 0.5;
    
    cout << "Dollor is " << dollors << ", Cents is " << cents << endl; 
    return 0;
}