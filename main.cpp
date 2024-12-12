//Classes
#include "8_Kyu/1_mpg_to_kpl/Converter.hpp"
#include "7_Kyu/1_Reverse_Words/ReverseWords.hpp"
#include "7_Kyu/2_Get_the_Middle_Character/GetMiddle.hpp"
#include "7_Kyu/3_Breaking_Chocolate_Problem/BreakChocolate.hpp"
#include "6_Kyu/1_Valid_Braces/ValidBraces.hpp"
#include "6_Kyu/2_Two_Sum/TwoSum.hpp"
#include "6_Kyu/3_Sum_of_Powers_Eq_Initial_Number/SumDigPow.hpp"

//Libraries
#include <iostream>
#include <stack>
#include <cmath>
#include <vector>
#include <list>

//Namespace
using namespace std;

int main() {    
    for (auto num : sumDigPow(1, 100)) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}