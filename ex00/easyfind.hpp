#include <iostream>
#include <algorithm>

template <typename T>
int easyfind(T type, int i)
{
	typename T::const_iterator j = std::find(type.begin(), type.end(), i);

	if (j != type.end())
		return 1;
	else
		return 0;
}