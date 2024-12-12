//https://www.codewars.com/kata/534ea96ebb17181947000ada/train/cpp
#include "BreakChocolate.hpp"

int BreakChocolate::break_chocolate(int n, int m){
    if( (n*m) - 1 < 0) return 0;
    return (n*m) - 1;
}