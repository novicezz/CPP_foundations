#include <iostream>
#include <user_input.hpp>
/*
    COPY PASTE TOKEN "NUM_OF_ELEMS" will be replaced by "100"
    #define NUM_OF_ELEMS 100
    DECLARATION = RUN ONCE AT START OF FOR LOOP
    CONDITION   = FOR LOOP WILL RUN AS LONG AS THIS EVALUATES TO TRUE
    ITERATOR    = RUN AT THE END OF EVERY LOOP
    for(DECLARATION; CONDITION; ITERATOR)
    for(int i = 0; i < array_length; i = i + 1) array[i]
    I = 0
    IS I < 4
    RUN CODE
    ADD 1 TO I
    [] = STATIC ARRAY
    MUST BE KNOWN AT COMPILE TIME
    0 + 1 = array[0], 1 + 1 = array[1], 2, 3
    += (VALUE)
    var = var + (VALUE)
    var++
    var = var + 1
    int array[4] = { 1, 2, 7, 3 }
    each int = 4 bytes
    4 * 4 = 16
    array[0] = int = 4 bytes
    sizeof(array) = 16 / sizeof(array[0]) = 4
    std::cout << "Enter P1 information: ";
    std::cin >> P1;
    [] = AUTOMATIC SIZING = NUMBER OF ELEMENTS CONSTRUCTED
    UserData info[100] = user_input();
        std::cout << info.name << "'s phone number and email is: " << info.phone_number << ' ' << info.email;
*/

// TYPE NAME;
// NAME = VALUE;
// TYPE NAME = VALUE;

int main() {
    // CREATE 4 USER DATA ELEMENTS
    UserData allUserData[4];
    for(int i = 0; i < 4; i++) {
        allUserData[i] = user_input();
        std::cout
        << allUserData[i].name 
        << "'s phone number and email is: "
        << allUserData[i].phone_number 
        << ' ' 
        << allUserData[i].email
        << '\n';
    }

    return 0;
}