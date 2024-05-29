#include "Contact.hpp"
#include <iostream>

Contact::Contact(std::string name, std::string phone) : newName(name), newPhone(phone) {}

std::string Contact::getName() {
    return newName;
}

std::string Contact::getPhone() {
    return newPhone;
}

void Contact::display() {
    std::cout << "Name: " << newName << ", Phone: " << newPhone << std::endl;
}
