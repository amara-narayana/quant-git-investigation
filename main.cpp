#include <iostream>

int main() {
    double price = 100.50;
    double quantity = 10;

    double position = price * quantity;

    std::cout << "Position value: " << position << '\n';

    return 0;
}