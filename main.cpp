#include <iostream>
using namespace std;
int main() {

    double stockPrice, quantity, postionValue;
    stockPrice = 150.25;
    quantity = 20;
    postionValue = stockPrice * quantity;
    cout << "Position value: " << postionValue << endl;

    double price1 = 100.0;
double volume1 = 1000;

double price2 = 102.0;
double volume2 = 2000;

double vwap =
    ((price1 * volume1) + (price2 * volume2)) /
    (volume1 + volume2);

std::cout << "VWAP: " << vwap << '\n';

    return 0;

}