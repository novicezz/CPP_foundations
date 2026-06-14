#include <iostream>
#include <string>
#include <vector>

static bool parse_line(std::string &equation, std::vector<std::string> &segments);
static double process_segments(std::vector<std::string> &segments);

int advanced_calc() {
    std::string input_equation;
    // ENTER EQUATION
    std::cout << "Enter arithmetic equation (+,-,*,/): ";
    // GET A LINE OF TEXT FROM THE CONSOLE
    // std::getline(arg1, arg2)
    // arg1 = input stream you want to get from
    // arg2 = variable to place it into
    std::getline(std::cin, input_equation);
    // PROCESS EQUATION
    // "23 / 11 - 3333"
    // { "23", "/", "11", "-", "3333" }
    //    ^
    // IS IT A NUMBER OR SYMBOL?
    // NUMBER: CONVERT IT AND STORE IT
    // SYMBOL: STORE OPERATION
    std::vector<std::string> segments;
    if(parse_line(input_equation, segments)) {
        return 1;
    }
    std::cout << "Result: " << process_segments(segments) << '\n';
    return 0;
}

static bool parse_line(std::string &equation, std::vector<std::string> &segments) {
    std::string nextSegment;
    for(char c : equation) {
        if(c == ' ' || c == '\t' || c == '\n' || c == '\r') {
            continue;
        }
        if(std::isdigit((unsigned char) c) || c == '.') {
            nextSegment += c;
        }
        else if(c == '+' || c == '-' || c == '*' || c == '/') {
            if(!nextSegment.empty()) {
                segments.push_back(nextSegment);
                nextSegment.clear();
            }
            else if(segments.size() == 0) {
                std::cout << "Invalid input.\n";
                return true;
            }
            segments.push_back(std::string(1, c));
        }
        else {
            std::cout << "Invalid input.\n";
            return true;
        }
    }
    if(!nextSegment.empty()) {
        segments.push_back(nextSegment);
        nextSegment.clear();
    }
    return false;
}

static double process_segments(std::vector<std::string> &segments) {
    double result = std::stod(segments.at(0));
    char operation;
    for(int i = 1; i < segments.size(); i++) {
        const std::string &segment = segments.at(i);
        if(std::isdigit((unsigned char) segment.at(0)) || segment.at(0) == '.') {
            double next = std::stod(segment);
            switch(operation) {
                case '+':
                    result += next;
                    break;
                case '-':
                    result -= next;
                    break;
                case '*':
                    result *= next;
                    break;
                case '/':
                    if (next == 0.0) {
                        std::cout << "Invalid input: division by zero is undefined.\n";
                        return 0.0;
                    }
                    result /= next;
                    break;
            }
        }
        else {
            operation = segment.at(0);
        }
    }
    return result;
}