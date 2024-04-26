#include <cmath>
#include <iostream>

// Function to calculate the length of the hypotenuse
float calculateHypotenuse(float a, float b) {
    return std::sqrt(a * a + b * b);
}

// Function to calculate the area of the triangle
float calculateArea(float a, float b) {
    return 0.5 * a * b;
}

// Function to calculate the angle opposite one of the legs (in radians)
float calculateAngle(float a, float b) {
    return std::atan(b / a);
}

int main() {
    float a, b;
    int operation;

    std::cout << "Enter the operation you want to perform:\n"
                 "1- Calculate LENGTH\n"
                 "2- Calculate AREA\n"
                 "3- Calculate ANGLE\n";
    std::cin >> operation;

    std::cout << "Enter the lengths of the two legs (a and b):\n";
    std::cin >> a >> b;

    switch (operation) {
        case 1: {
            float length = calculateHypotenuse(a, b);
            std::cout << "The length of the hypotenuse is: " << length << std::endl;
            break;
        }
        case 2: {
            float area = calculateArea(a, b);
            std::cout << "The area of the triangle is: " << area << std::endl;
            break;
        }
        case 3: {
            float angle = calculateAngle(a, b);
            std::cout << "The angle opposite one of the legs (in radians) is: " << angle << std::endl;
            break;
        }
        default:
            std::cout << "Invalid operation!\n";
            break;
    }

    return 0;
}
