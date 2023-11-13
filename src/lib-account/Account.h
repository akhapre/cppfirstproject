#ifndef _ACCOUNT_H
#define _ACCOUNT_H
#include <string>
#include <iostream>
class Account {

private:
    double balance;
    std::string  name;
public:
    void set_balance(double bal);
    double get_balance();
    void set_name(std::string name_provided);
    std::string get_name();

    bool deposit(double amt);
    bool windraw(double amt);
    friend std::ostream& operator<<(std::ostream& os, const Account &data);

    //constructors
    Account();
    Account(double bal);
    Account(std::string nm);
    Account(double bal, std::string nm);


    //destructor
    ~Account();

};
#endif
