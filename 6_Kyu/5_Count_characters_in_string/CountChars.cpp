#include "CountChars.hpp"

#include <map>
#include <string>

std::map<char, unsigned> count(const std::string& string) {
    std::map<char, unsigned> count;
    for (const char& c : string) {
        count[c]++;
    }
    return count;
}