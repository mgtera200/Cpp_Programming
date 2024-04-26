#include "address.hpp"
#include <iomanip>
#include <iostream>
#include <string>
int main() {
  std::string userInput;

  std::cout << "Welcome to your favorite address book!" << std::endl;
  while (true) {
    std::cout << "What do you want to do?" << std::endl;
    std::cout << std::setw(10) << "| "
              << "List       "
              << "| "
              << "Lists all users" << std::endl;
    std::cout << std::setw(10) << "| "
              << "Add        "
              << "| "
              << "Adds an user" << std::endl;
    std::cout << std::setw(10) << "| "
              << "Delete     "
              << "| "
              << "Deletes an user" << std::endl;
    std::cout << std::setw(10) << "| "
              << "Delete all "
              << "| "
              << "Removes all users" << std::endl;
    std::cout << std::setw(10) << "| "
              << "Search     "
              << "| "
              << "Search for a user" << std::endl;
    std::cout << std::setw(10) << "| "
              << "Close      "
              << "| "
              << "Closes the address book" << std::endl;
    std::getline(std::cin, userInput);

    if (userInput == "List") {
      list();
    } else if (userInput == "Add") {
      add();
    } else if (userInput == "Delete") {
      user_delete();
    } else if (userInput == "Delete all") {
      delete_all();
    } else if (userInput == "Search") {
      search();
    } else if (userInput == "Close") {
      close();
    } else {
      std::cout << "Please try again" << std::endl;
    }
  }
  return 0;
}