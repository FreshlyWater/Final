class Contact {
    private:
        std::string newName;
        std::string newPhone;

    public:
        Contact(std::string name, std::string phone);
        std::string getName();
        std::string getPhone();
        void display();

};