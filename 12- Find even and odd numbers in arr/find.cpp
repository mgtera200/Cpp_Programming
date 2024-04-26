#include <iostream>
#include <vector>

const int ARRAY_SIZE = 6;

// Function to separate even and odd numbers from the array
void separateEvenOdd(const int arr[], std::vector<int> &even, std::vector<int> &odd) {
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (arr[i] % 2 == 0) {
            even.push_back(arr[i]);
        } else {
            odd.push_back(arr[i]);
        }
    }
}

int main() {
    std::vector<int> evenNumbers;
    std::vector<int> oddNumbers;

    int arr[ARRAY_SIZE] = {1, 2, 3, 4, 5, 6};

    // Separate even and odd numbers from the array
    separateEvenOdd(arr, evenNumbers, oddNumbers);

    // Display even numbers
    std::cout << "Even numbers: ";
    for (int num : evenNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Display odd numbers
    std::cout << "Odd numbers: ";
    for (int num : oddNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
