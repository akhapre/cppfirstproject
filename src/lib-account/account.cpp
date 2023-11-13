#include "Account.h"
#include <iostream>
void Account::set_balance(double bal) {
    balance =  bal;
}
double Account::get_balance() {
    return balance;
}

void Account::set_name(std::string name_provided) {
    name = name_provided;
}

std::string Account::get_name() {
    return name;
}

bool Account::deposit(double amt) {
    if (amt > 0) {
    balance += amt;
    return true;
    } else {
        return false;
    }
}

bool Account::windraw(double amt) {
    if (balance >= amt) {
        balance -= amt;
        return true;
    } else {
        return false;
    }
}

Account::Account() : balance {5000} , name {"Ashish"} {
    std::cout << "Constructor called : default " << std::endl;
}

Account::Account(double bal) : Account{bal, ""} {
    std::cout << "Constructor called : balance > " << balance << std::endl;
}
Account::Account(std::string nm) : name{nm}{
}
Account::Account(double bal, std::string nm) : balance {bal}, name {nm} {
    std::cout << "Constructor called : balance " << balance << ", name > " << name << std::endl;
}

Account::~Account() {
    std::cout << "Descructor called : name > " << name << ", balance > " << balance << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Account &data) {
    os << "Account >> balance : " << data.balance << ", name : " << data.name << std::endl;
    return os;
}
