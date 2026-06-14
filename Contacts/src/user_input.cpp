#include <iostream>
#include <user_input.hpp>

UserData user_input() {

    UserData P1;
    std::cout << "Enter the following information in the given order: name, phone number, email.\n";
    std::cin >> P1.name;
    std::cin >> P1.phone_number;
    std::cin >> P1.email;

    return P1;
}