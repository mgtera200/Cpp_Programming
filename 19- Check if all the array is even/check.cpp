/*
 * Author: Eng. Mostafa Tera
 * Created on: Thu May 16 2024
 * Description: This program checks if all elements in an array are even.
 */

#include <algorithm> // For std::all_of
#include <array>     // For std::array
#include <iostream>

int main(int argc, const char **argv) {
    // Define an array of integers
    std::array<int, 5> arr = {0, 2, 4, 6, 8};

    // Check if all elements in the array are even
    bool all_even = std::all_of(arr.begin(), arr.end(), [](int num) {
        return num % 2 == 0;
    });

    // Output the result
    if (all_even) {
        std::cout << "All the array elements are even." << std::endl;
    } else {
        std::cout << "There is an array element which is not even." << std::endl;
    }

    return 0;
}
