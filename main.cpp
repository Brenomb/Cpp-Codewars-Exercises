//Classes
#include "ReverseWords/ReverseWords.hpp"
#include "Valid Braces/ValidBraces.hpp"
//Libraries
#include <iostream>
#include <stack>
//Namespace
using namespace std;

int main() {
    string input = "(((";
    cout << valid_braces(input) << endl; 
    return 0;
}