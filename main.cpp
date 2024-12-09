//Classes
#include "ReverseWords/ReverseWords.hpp"
#include "Valid Braces/ValidBraces.hpp"
#include "mpg to kpl/Converter.hpp"
#include "Get the Middle Character/GetMiddle.hpp"
#include "Two Sum/TwoSum.hpp"
//Libraries
#include <iostream>
#include <stack>
#include <cmath>
#include <vector>

//Namespace
using namespace std;

int main() {
    vector<int> input = {1, 2, 3};
    auto result = two_sum(input, 4);
    cout << "result: (" << result.first << ", " << result.second << ")" << endl;
    return 0;
}