//https://www.codewars.com/kata/52c31f8e6605bcc646000082/cpp

#include "TwoSum.hpp"

std::pair<std::size_t, std::size_t> two_sum(const std::vector<int>& numbers, int target) {
	for (size_t i = 0; i < numbers.size(); i++)
	{
		for (size_t j = i+1; j < numbers.size(); j++)
		{
			 if((numbers[i] + numbers[j])==target)
				 return { i, j };
		}
	}
}