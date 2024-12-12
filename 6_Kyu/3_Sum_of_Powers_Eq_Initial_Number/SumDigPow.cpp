//https://www.codewars.com/kata/5626b561280a42ecc50000d1/train/cpp
#include "SumDigPow.hpp"

#include <iostream>
#include <vector>
#include <cmath>

std::vector<unsigned int> sumDigPow(unsigned int a, unsigned int b) {
    std::vector<int> digits;

    for (a; a < b; a++) {

        std::string sumStr = std::to_string(a);
        int sum = 0;
        int p = 0;

        for (char c : sumStr) {
            p++;
            int digit = c - '0';
            sum += pow(digit, p);
        }
        if (sum == a) {
            digits.push_back(a);
        }
    }
    //Output a list
    return std::vector<unsigned int>(digits.begin(), digits.end());
}