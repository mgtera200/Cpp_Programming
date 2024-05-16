/*
 * Eng.Mostafa Tera
 * Created on Thu May 16 2024
 */


#include <algorithm> // For std::any_of
#include <array>     // For std::array
#include <iostream>

int main(int argc, const char **argv) {
    // Define an array of integers
    std::array<int, 5> arr = {1, 3, 5, 7, 9}; // Example array with all odd numbers

    // Check if there is any even element in the array
    bool any_even = std::any_of(arr.begin(), arr.end(), [](int num) {
        return num % 2 == 0;
    });

    // Output the result
    if (any_even) {
        std::cout << "There is at least one even element in the array." << std::endl;
    } else {
        std::cout << "There are no even elements in the array." << std::endl;
    }

    return 0;
}
