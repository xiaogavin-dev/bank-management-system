#pragma once 
#include <string>

class Account { 
private: 
    double balance; 
    std::string name;
    std::string id;  

public: 
    Account(); 
    double get_balance();
    std::string get_name();
    std::string get_id();
};