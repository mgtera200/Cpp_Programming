/*
 * Eng.Mostafa Tera
 * Created on Thu May 16 2024
 */

#include <iostream>
#include <numeric> // for std::accumulate
#include <array>

int main() {
    std::array<int, 5> arr = {1, 2, 3, 4, 5};

    // Calculate the sum of elements using std::accumulate
    int sum = std::accumulate(arr.begin(), arr.end(), 0);

    // Output the sum
    std::cout << "Sum of elements: " << sum << std::endl;

    return 0;
}
