#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

#include "account.h"

int main(int argc, char *argv[]) {
    Account *acc = new Account();

    std::cout << acc->get_name() << std::endl;

    return 0;
}