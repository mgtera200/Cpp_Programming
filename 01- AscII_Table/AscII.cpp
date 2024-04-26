// Eng.TERA
// This Lab is to Create a table for AscII code

#include <iostream>
#include <iomanip>

int main() {

    std::cout<< "+" << "------" << "+" << "-------" << "+"<< std::endl;
    std::cout<< "|" << " Char " << "|" << " ASCII " << "|"<< std::endl;
    std::cout<< "+" << "------" << "+" << "-------" << "+"<< std::endl;
for (int i = 0; i < 125; ++i) {
    std::cout<< "|" <<std::setw(4)<<static_cast<char>(i)<< "|" <<std::setw(4) << i << "|"<< std::endl;
    }    

}
