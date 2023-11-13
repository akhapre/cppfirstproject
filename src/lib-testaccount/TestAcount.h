#include <iostream>
class TestAccount {
    private:
        int data;
    public:
        TestAccount() : data{0}{std::cout << "Standard constructor called" << std::endl;}
        TestAccount(int data_val) : data{data_val}{std::cout << "Constructor with arg " << data_val << " is called" << std::endl;};
        ~TestAccount() {std::cout << "Destructor is called " << data << std::endl;}
        int get_value() {return data;}


};