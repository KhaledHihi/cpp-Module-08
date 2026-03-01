#include "easyfind.hpp"
#include <vector>

int main()
{
	
	std::vector<int> numbers;
	numbers.push_back(1);
	numbers.push_back(4);
	numbers.push_back(8);
	numbers.push_back(9);
	numbers.push_back(10);
	numbers.push_back(11);

	if (easyfind(numbers, 10) == 1)
		std::cout << "found :" << 10 << std::endl;
	else
		std::cout <<"I did not found it" << 10 << std::endl;
		
	if (easyfind(numbers, 20) == 1)
		std::cout << "found :" << 20 << std::endl;
	else
		std::cout << "I did not found it" << 20 << std::endl;
}