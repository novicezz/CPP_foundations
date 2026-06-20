#ifndef USER_INPUT_HPP
#define USER_INPUT_HPP

#include <string>

struct UserData {
    std::string name, phone_number, email;
};

UserData user_input();

#endif



