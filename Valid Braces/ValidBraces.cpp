#include "ValidBraces.hpp"
#include <stack>

bool valid_braces(const std::string &braces){
    std::stack<char> stack; // Initialize a stack to keep track of braces

    for (size_t i = 0; i < braces.length(); i++) {
        char current = braces[i];

        if (current == '(' || current == '{' || current == '[') {
            stack.push(current);
        } else {
            if (stack.empty()) {
                return false;
            }
            char top = stack.top();
            stack.pop();
            if ((current == ')' && top != '(') || (current == '}' && top != '{') || (current == ']' && top != '[')) {
                return false;
            }
        }
    }
    return stack.empty();
}
