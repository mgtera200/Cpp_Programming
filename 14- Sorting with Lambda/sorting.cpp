#include <algorithm>
#include <iostream>

int main() {
    // Initialize an array of integers
    int numbers[6] = {4, 2, 6, 9, 1, 5};

    // Sort the array in ascending order
    std::sort(std::begin(numbers), std::end(numbers),
              [](int first, int second) { return first < second; });

    // Print the sorted array
    std::cout << "Sorted array: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
