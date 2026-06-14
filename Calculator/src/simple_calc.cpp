#include <iostream>

int simple_calc() {
    // GET FIRST NUMBER STORE IN VARIABLE
    // GET OPERATION (+-*/)
    // GET SECOND NUMBER STORE IN VARIABLE
    // DO MATH BASED ON OPERATION AND STORE RESULT
    // PRINT RESULT
    // FLOAT[2] = 2 FLOATS
    // FLOAT[0] = FIRST FLOAT
    // FLOAT[1] = SECOND FLOAT
    float input[2];
    char operation;
    float result;
    // char == single character
    // char operation = '*'; i.e.
    std::cout << "Enter first number: ";
    std::cin >> input[0];
    std::cout << "Enter second number: ";
    std::cin >> input[1];
    std::cout << "Enter operation (+,-,*,/): ";
    std::cin >> operation;
    if(operation == '+') {
        result = input[0] + input[1];
    }
    else if(operation == '-') {
        result = input[0] - input[1];
    }
    else if (operation == '*') {
        result = input[0] * input[1];
    }
    else if (operation == '/') {
        if(input[1] == 0) {
            std::cout << "Invalid operation.\n";
            return 1;
        }
        result = input[0] / input[1];
    }
    else {
        std::cout << "Invalid operation.\n";
        return 1;
    }
    std::cout << "Result: " << result << '\n';

    return 0;
}