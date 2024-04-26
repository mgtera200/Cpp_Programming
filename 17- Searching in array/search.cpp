#include <iostream>

const int ARRAY_SIZE = 5;

/**
 * Searches for a number in an array.
 * 
 * @param arr The array to search.
 * @param num The number to search for.
 * @return true if the number exists in the array, false otherwise.
 */
bool searchArray(const int arr[], int num) {
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        if (arr[i] == num) {
            return true;
        }
    }
    return false;
}

int main() {
    int num;
    int arr[ARRAY_SIZE] = {1, 4, 6, 7, 3};
    
    // Prompt the user to enter a number to search
    std::cout << "Enter the number you want to search in the array: ";
    std::cin >> num;
    
    // Perform the search
    if (searchArray(arr, num)) {
        std::cout << "The number " << num << " exists in the array." << std::endl;
    } else {
        std::cout << "The number " << num << " does not exist in the array." << std::endl;
    }
    
    return 0;
}
