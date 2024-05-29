#include <iostream>
#include <vector>
#include <string>
#include "Contact.hpp"

void addContact(std::vector<Contact>& contacts) {
  std::string name, phone;
  std::cout << "Enter name: ";
  std::getline(std::cin >> std::ws, name);
  std::cout << "Enter phone: ";
  std::getline(std::cin, phone);
  contacts.emplace_back(name, phone);
  std::cout << "Contact added successfully.\n";
}

void displayContacts(std::vector<Contact> contacts) {
  std::cout << "\n--- Contact List ---\n";
  if (contacts.empty()) {
    std::cout << "\n No contacts to display. \n";
    std::cout << "\n";
  } else {
    for (int i = 0; i < contacts.size(); i++) {
      contacts[i].display();
    }
  }
}


void searchContact(std::vector<Contact> contacts) {
  std::string name;
  std::cout << "\n--- Search for a Contact ---\n";
  std::cout << "Enter name to search: ";
  std::getline(std::cin >> std::ws, name);
  for (int i = 0; i < contacts.size(); i++) {
    if (contacts[i].getName() == name) {
      std::cout << "__________________________ \n";
      contacts[i].display();
    }
    std::cout << "\n";
  }
}

int main() {
  std::vector<Contact> contacts;
  int choice = 0;
    std::cout << "===========================\n";
    std::cout << "Welcome to Contact Manager\n";
    std::cout << "===========================\n";

  while (choice != 4) {
    std::cout << "\n---------------------------\n";
    std::cout << "What is your choice? (1-4) \n";
    std::cout << "1. Add Contact \n2. Display Contacts \n3. Search Contact \n4. Exit\n";
    std::cout << "---------------------------\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    
    switch (choice) {
      case 1:
        addContact(contacts);
        break;
      case 2:
        displayContacts(contacts);
        break;  
      case 3:
        searchContact(contacts);
        break;
      case 4:
        std::cout << "Exiting...\n";
        break;
      default:
        std::cout << "Wrong Input. Try again.\n";
    }
  }
  return 0;
}
