#include <iostream>
#include <string>

std::string decimalToBinary(int decimal) {
  std::string binary = "";
  while (decimal > 0) {
    binary = (decimal % 2 == 0 ? "0" : "1") + binary;
    decimal >>= 1;
  }
  return binary;
}

int binaryToDecimal(std::string binary) {
  int decimal = 0;
  int power = 1;
  for (int i = binary.size() - 1; i >= 0; --i) {
    if (binary[i] == '1') {
      decimal += power;
    }
    power *= 2;
  }
  return decimal;
}

int main() {
    
  int decimalNumber;


  std::cout << "Enter a decimal number: ";
  std::cin >> decimalNumber;
  std::string binaryNumber_str = decimalToBinary(decimalNumber);
  std::cout << "Binary representation: " << binaryNumber_str << std::endl;


  std::cout << "Enter a binary number: ";
  std::cin >> binaryNumber_str;
  decimalNumber = binaryToDecimal(binaryNumber_str);
  std::cout << "Decimal representation: " << decimalNumber << std::endl;

  return 0;
}
