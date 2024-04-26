#include <iostream>

// Function to delete a number from an array
void deleteNumber(int arr[], int& size, int numToDelete) {
    bool found = false;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == numToDelete) {
            found = true;
            // Shift elements to the left to fill the gap
            for (int j = i; j < size - 1; ++j) {
                arr[j] = arr[j + 1];
            }
            // Decrease size by 1
            --size;
            break; // Exit the loop once the first occurrence is deleted
        }
    }
    if (!found) {
        std::cout << "Number not found in the array." << std::endl;
    }
}

int main() {
    const int maxSize = 10;
    int arr[maxSize] = {3, 6, 8, 2, 5};
    int size = 5;

    // Display the original array
    std::cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Enter the element you want to delete" << std::endl;
    int numToDelete;
    std::cin >> numToDelete;
    deleteNumber(arr, size, numToDelete);

    // Display the modified array
    std::cout << "Array after deletion: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
