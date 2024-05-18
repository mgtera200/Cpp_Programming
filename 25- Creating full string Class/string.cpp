/*
 * Author: Eng. Mostafa Tera
 * Created on Fri May 17 2024
 */

#include <algorithm>
#include <cstring>
#include <iostream>
#include <memory>
#include <string>
#include <utility>

class TeraString {
public:
    // Constructors
    TeraString();
    TeraString(const char other_string[]);
    TeraString(TeraString &&);
    TeraString(const TeraString &);
    
    // Assignment operators
    TeraString &operator=(TeraString &&);
    TeraString &operator=(const TeraString &);
    
    // Member functions
    int getLength() const;
    const char* getString() const;
    void erase();
    void append(const char *string_to_append);
    
    // Destructor
    ~TeraString();

private:
    std::unique_ptr<char[]> string;
    int length;
};

// Default constructor
TeraString::TeraString() {}

// Constructor with a C-style string
TeraString::TeraString(const char other_string[]) : length(strlen(other_string)) {
    
    string = std::make_unique<char[]>(length + 1);
    std::copy(other_string, other_string + length, string.get());
    string[length] = '\0';

}

// Destructor
TeraString::~TeraString() {}

// Move constructor
TeraString::TeraString(TeraString &&other_string) : length(other_string.length) {
    
    string = std::move(other_string.string);
    other_string.length = 0;

}

// Copy constructor
TeraString::TeraString(const TeraString &other_string) : length(other_string.length) {

    string = std::make_unique<char[]>(length + 1);
    std::copy(other_string.string.get(), other_string.string.get() + length,string.get());
    string[length] = '\0';
}

// Move assignment operator
TeraString &TeraString::operator=(TeraString &&other_string) {
    
    if (this != &other_string) {
        length = other_string.length;
        string = std::move(other_string.string);
        other_string.length = 0;
    }
    return *this;
}

// Copy assignment operator
TeraString &TeraString::operator=(const TeraString &other_string) {
    
    if (this != &other_string) {
        length = other_string.length;
        string = std::make_unique<char[]>(length + 1);
        std::copy(other_string.string.get(), other_string.string.get() + length,string.get());
        string[length] = '\0';
    }
    return *this;
}

// Function to get the length of the string
int TeraString::getLength() const {
    return length;
}

// Function to get the string
const char* TeraString::getString() const {
    return string.get();
}

// Function to erase the string
void TeraString::erase() {
    string.reset();
    length = 0;
}

// Function to append a string to the end
void TeraString::append(const char *string_to_append) {

    int new_length = length + strlen(string_to_append);
    std::unique_ptr<char[]> new_string = std::make_unique<char[]>(new_length + 1);
    std::copy(string.get(), string.get() + length, new_string.get());
    std::copy(string_to_append, string_to_append + strlen(string_to_append),new_string.get() + length);
    string = std::move(new_string);
    length = new_length;
}

int main(int argc, const char **argv) {
    
    TeraString str1("Hello");
    TeraString str2("tera");
    str1.append(str2.getString());
    std::cout << "Appended String: " << str1.getString() << std::endl;
    std::cout << "Length: " << str1.getLength() << std::endl;

    return 0;
}
