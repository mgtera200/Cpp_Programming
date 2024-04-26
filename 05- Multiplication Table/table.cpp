#include <iostream>

void printMultiplicationTable(int number) {
    for (int i = 1; i <= 12; ++i) {
        std::cout << number << "x" << i << "=" << number * i << std::endl;
    }
}

int main() {
    int tableNumber;
    std::cout << "Enter the number for the multiplication table you want: ";
    std::cin >> tableNumber;

    printMultiplicationTable(tableNumber);

    return 0;
}
