#include <iostream>
#include <string>

int main() {

  int sum=0;
  int num;
  std::cout << "Enter a number" << std::endl;

  std::cin >> num;
  std::string strNum = std::to_string(num);
  for (char charDigit : strNum) {
    char digit = charDigit - '0';
    sum += digit;
  }
  std::cout << "The sum of the digits is " << sum << std::endl;

  return 0;
}