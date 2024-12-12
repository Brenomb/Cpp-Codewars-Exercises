//https://www.codewars.com/kata/5656b6906de340bd1b0000ac/train/cpp
#include "TwoToOne.hpp"

#include <algorithm>

static std::string longest(const std::string &s1, const std::string &s2){
    std::string s = s1 + s2;
    std::sort(s.begin(), s.end());
    s.erase(std::unique(s.begin(), s.end()), s.end());
    return s;
}
