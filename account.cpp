#include "account.h"

Account::Account() { 
    this->balance = 0;
    this->id = "0000000"; 
    this->name = "Default";
}

double Account::get_balance() { 
    return this->balance; 
}

std::string Account::get_id() { 
    return this->id;
}

std::string Account::get_name() { 
    return this->name;
}