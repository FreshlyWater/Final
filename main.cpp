#include <iostream>
#include <vector>
#include <string>
#include "Contact.hpp"

  void addContact(std::vector<Contact> contacts) {
    std::string name, phone;
    std::cout << "Enter name: ";
    std::cin >> name;
    std::cout << "Enter phone: ";
    std::cin >> phone;
    contacts.push_back(Contact(name, phone));
  }
  
  void displayContacts(std::vector<Contact> contacts) {
    for (int i = 0; i < contacts.size(); i++) {
      contacts[i].display();
    }
  }

  void searchContact(std::vector<Contact> contacts) {
    std::string name;
    std::cout << "Enter name to search: ";
    std::cin >> name;
    for (int i = 0; i < contacts.size(); i++) {
      if (contacts[i].getName() == name) {
        contacts[i].display();
      }
    }
  }

  int main() {
    std::vector<Contact> contacts;
    int choice = 0;

    while(choice != 4) {
      std::cout << "1. Add Contact \n 2.Display Contacts \n 3.Search Contact \n 4.Exit";
      std::cout << "Enter your choice: ";
      std::cin >> choice;

      switch(choice) {
        case 1:
          addContact(contacts);
          break;
        case 2:
          displayContacts(contacts);
        case 3:
          searchContact(contacts);
          break;
        case 4:
          std::cout << "Exiting...";
          break;
        default:
          std::cout << "Wrong Input. Try again.";
      }
    }
  }