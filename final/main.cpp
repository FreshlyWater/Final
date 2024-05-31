#include <iostream>
#include <vector>
#include <string>
#include "Contact.hpp"
using namespace std;

void addContact(vector<Contact>& contacts) {
  string name, phone;
  cout << "Enter name: ";
  getline(cin >> ws, name);
  cout << "Enter phone: ";
  getline(cin, phone);
  contacts.emplace_back(name, phone);
  cout << "Contact added successfully.\n";
}

void displayContacts(vector<Contact> contacts) {
  cout << "\n--- Contact List ---\n";
  if (contacts.empty()) {
    cout << "\n No contacts to display. \n";
    cout << "\n";
  } else {
    for (int i = 0; i < contacts.size(); i++) {
      contacts[i].display();
    }
  }
}


void searchContact(vector<Contact> contacts) {
  string name;
  cout << "\n--- Search for a Contact ---\n";
  cout << "Enter name to search: ";
  getline(cin >> ws, name);
  for (int i = 0; i < contacts.size(); i++) {
    if (contacts[i].getName() == name) {
      cout << "__________________________ \n";
      contacts[i].display();
    }
    cout << "\n";
  }
}

int main() {
  vector<Contact> contacts;
  int choice = 0;
    cout << "===========================\n";
    cout << "Welcome to Contact Manager\n";
    cout << "===========================\n";

  while (choice != 4) {
    cout << "\n---------------------------\n";
    cout << "What is your choice? (1-4) \n";
    cout << "1. Add Contact \n2. Display Contacts \n3. Search Contact \n4. Exit\n";
    cout << "---------------------------\n";
    cout << "Enter your choice: ";
    cin >> choice;
    
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
        cout << "Exiting...\n";
        break;
      default:
        cout << "Wrong Input. Try again.\n";
    }
  }
  return 0;
}
