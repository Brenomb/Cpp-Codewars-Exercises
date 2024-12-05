//https://www.codewars.com/kata/56747fd5cb988479af000028/cpp

#include "GetMiddle.hpp"

std::string get_middle(std::string input) 
{
    int length = input.length();
    int middle = length / 2;
    if (length % 2 == 0)
    {
        return input.substr(middle - 1, 2);
    }
    else
    {
        return input.substr(middle, 1);
    }
}

// From CodeWars
std::string get_middleOneLine(std::string input) 
{
  return input.substr((input.size()-1)/2,(input.size()+1)%2+1);
}