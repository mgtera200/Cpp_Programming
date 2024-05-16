/*
 * Eng.Mostafa Tera
 * Created on Thu May 16 2024
 */
#include <iostream>
#include <algorithm> // For std::copy
#include <string>    // For std::string
#include <memory>    // For std::unique_ptr


class teraString
{
public:
    teraString()=default;
    teraString(const std::string &user_string) : string_data(nullptr),length(user_string.length())
    {
        string_data = std::make_unique<char[]>(length+1);
        std::copy(user_string.begin(),user_string.end(),string_data.get());
        string_data[length]='\0';

    }
    teraString(const teraString& other) : length(other.length)
    {
        string_data = std::make_unique<char[]>(length+1);
        std::copy(other.string_data.get(),other.string_data.get() + length + 1,string_data.get());

    }

    int get_length() const
    {
        return length;
    }

    const char * get_string() const
    {
        return string_data.get();
    }
    ~teraString();

private:

    std::unique_ptr<char[]> string_data;
    int length;
    
};



teraString::~teraString()
{
}

int main() {
    // Create a MyString object with a C++ string
    teraString str1("tera");

    // Use getter functions
    std::cout << "Length of str1: " << str1.get_length() << std::endl;
    std::cout << "String data of str1: " << str1.get_string() << std::endl;

    // Create another MyString object using copy constructor
    teraString str2 = str1;

    // Output string data of str2
    std::cout << "String data of str2: " << str2.get_string() << std::endl;

    return 0;
}
