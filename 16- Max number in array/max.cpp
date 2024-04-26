#include <iostream>

/**
 * Finds the maximum number in an integer array.
 * 
 * @param arr The array of integers.
 * @param size The size of the array.
 * @return The maximum number in the array.
 */
int findMax(int arr[], int size) {
    int max = arr[0]; // Initialize max to the first element of the array
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    const int ARRAY_SIZE = 5;
    int arr[ARRAY_SIZE] = {2, 7, 9, 8, 3};
    
    // Find the maximum number in the array
    int max = findMax(arr, ARRAY_SIZE);
    
    // Output the result
    std::cout << "The maximum number in the array is: " << max << std::endl;

    return 0;
}
