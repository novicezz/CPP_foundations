#include <iostream>
#include <user_input.hpp>

int main() {

    UserData info = user_input();
    std::cout << info.name << "'s phone number and email is: " << info.phone_number << ' ' << info.email;
    return 0;
}