#include "Contact.hpp"
#include <iostream>
using namespace std;

Contact::Contact(string name, string phone) : newName(name), newPhone(phone) {}

string Contact::getName() {
    return newName;
}

string Contact::getPhone() {
    return newPhone;
}

void Contact::display() {
    cout << "Name: " << newName << ", Phone: " << newPhone << "\n";
}
