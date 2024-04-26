#include <iostream>

// Function to find the maximum of three numbers
int max(int a, int b, int c) {
    int max = a; // Assume 'a' is the maximum
    
    // Check if 'b' is greater than current maximum
    if (b > max) {
        max = b;
    }
    
    // Check if 'c' is greater than current maximum
    if (c > max) {
        max = c;
    }
    
    return max; // Return the maximum value
}

int main() {
    // Test values
    int num1, num2, num3;
    
    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;
    
    // Call the function to find the maximum
    int maximum = max(num1, num2, num3);
    
    // Display the result
    std::cout << "Maximum number is: " << maximum << std::endl;
    
    return 0;
}
