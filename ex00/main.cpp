#include "easyfind.hpp"
#include <vector>

int main()
{
	
	std::vector<int> numbers;
	numbers.push_back(3);
	numbers.push_back(6);
	numbers.push_back(8);
	numbers.push_back(4);
	numbers.push_back(10);
	numbers.push_back(11);

	if (easyfind(numbers, 10) == 1)
		std::cout << 10 << " i found it" << std::endl;
	else
		std::cout << 10 << " i did not found it" << std::endl;
	if (easyfind(numbers, 20) == 1)
		std::cout << 20 << " i found it" << std::endl;
	else
		std::cout << 20 << " i did not found it" << std::endl;
}