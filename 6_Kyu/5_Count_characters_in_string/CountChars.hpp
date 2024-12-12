#ifndef COUNTCHARS_HPP
#define COUNTCHARS_HPP

#include <string>
#include <map>

class CountChars
{
public:
    std::map<char, unsigned> count(const std::string& string);
};

#endif // COUNTCHARS_HPP