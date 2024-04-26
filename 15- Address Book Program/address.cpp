// File: address_book_manager.cpp
// Description: A program to manage a simple address book

#include "address.hpp" 
#include <algorithm>
#include <iostream> 
#include <string> 
#include <vector> 

// Define a structure for storing contact information
struct Contact {
    std::string name; // Name of the contact
    std::string phone; // Phone number of the contact
};

std::vector<Contact> address_book; // Vector to store contacts

// Function to list all contacts in the address book
void list() {
    if (address_book.empty()) { // Check if the address book is empty
        std::cout << "No contacts found!" << std::endl; // Print message if empty
    } else {
        for (const auto& contact : address_book) { // Loop through each contact
            std::cout << contact.name << ": " << contact.phone << std::endl; // Print contact details
        }
    }
}

// Function to add a new contact to the address book
void add() {
    Contact newContact; // Create a new contact object
    std::cout << "Enter the name of the contact: ";
    std::getline(std::cin, newContact.name); // Get name input from user
    std::cout << "Enter the phone number: ";
    std::getline(std::cin, newContact.phone); // Get phone number input from user

    // Check if the contact already exists
    for (const auto& contact : address_book) {
        if (contact.name == newContact.name) {
            std::cout << "This contact already exists." << std::endl; // Print message if contact exists
            return;
        }
    }

    address_book.push_back(newContact); // Add new contact to address book
    std::cout << "Contact added successfully." << std::endl;
}

// Function to delete a contact from the address book
void user_delete() {
    if (address_book.empty()) { // Check if the address book is empty
        std::cout << "No contacts to delete!" << std::endl; // Print message if empty
        return;
    }

    std::string nameToDelete;
    std::cout << "Enter the name of the contact you want to delete: ";
    std::getline(std::cin, nameToDelete); // Get name input from user

    auto it = std::find_if(address_book.begin(), address_book.end(),
                           [&nameToDelete](const Contact& contact) {
                               return contact.name == nameToDelete;
                           });

    if (it != address_book.end()) { // Check if contact was found
        address_book.erase(it); // Delete contact from address book
        std::cout << "Contact deleted successfully." << std::endl; // Print deletion message
    } else {
        std::cout << "Contact not found!" << std::endl; // Print message if contact not found
    }
}

// Function to delete all contacts from the address book
void delete_all() {
    if (address_book.empty()) { // Check if the address book is empty
        std::cout << "The address book is already empty." << std::endl;
    } else {
        address_book.clear(); // Clear all contacts
        std::cout << "All contacts deleted successfully." << std::endl;
    }
}

// Function to close the address book manager
void close() {
    std::cout << "Thank you for using the address book manager. Goodbye!" << std::endl;
    exit(0); // Exit program with success status
}

// Function to search for a contact in the address book
void search() {
    std::string nameToSearch;
    std::cout << "Enter the name of the contact you want to search for: ";
    std::getline(std::cin, nameToSearch); // Get name input from user

    auto it = std::find_if(address_book.begin(), address_book.end(),
                           [&nameToSearch](const Contact& contact) {
                               return contact.name == nameToSearch;
                           });

    if (it != address_book.end()) { // Check if contact was found
        std::cout << "Contact found: " << it->name << ": " << it->phone << std::endl;
    } else {
        std::cout << "Contact not found!" << std::endl; // Print message if contact not found
    }
}
