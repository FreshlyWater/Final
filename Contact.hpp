#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>
using namespace std;

class Contact {
private:
    string newName;
    string newPhone;

public:
    Contact(string name, string phone);
    string getName();
    string getPhone();
    void display();
};

#endif
