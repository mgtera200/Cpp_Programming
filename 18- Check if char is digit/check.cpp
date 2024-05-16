/*
 * Author: Eng.Mostafa tera
 * Description: This program defines a class MyClass with a member function check_digit,
 *              which checks if a given character is a digit or not.
 */

#include <cctype>   // Include the C Standard Library header for character classification functions
#include <iostream> // Include the C++ Standard Library header for input and output operations

class MyClass
{
public:
    // Default constructor
    MyClass() = default;

    // Default destructor
    ~MyClass() = default;

    // Function to check if the character is a digit
    void check_digit(char x);

private:
    // No private members in this example
};

// Member function definition to check if a character is a digit
void MyClass::check_digit(char x)
{
    // Call std::isdigit() to check if the character is a digit
    int result = std::isdigit(x);

    // Output the result based on the return value of std::isdigit()
    if (result != 0)
    {
        std::cout << "The character is a digit." << std::endl;
    }
    else
    {
        std::cout << "The character is not a digit." << std::endl;
    }
}

// Main function
int main(int argc, const char **argv)
{
    // Create an instance of MyClass
    MyClass tera;

    // Test check_digit function with a non-digit character 'x'
    tera.check_digit('x');

    // Test check_digit function with a digit character '8'
    tera.check_digit('8');

    return 0;
}
