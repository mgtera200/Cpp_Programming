#include <iostream>

int main() {
    // Prompt the user to enter a number
    int userInput;
    std::cout << "Enter a number: ";
    std::cin >> userInput;

    // Use a lambda function to square the entered number
    [&userInput]() {
        userInput *= userInput;
    }();

    // Display the squared number
    std::cout << "The square of the given number is " << userInput << std::endl;

    return 0;
}
