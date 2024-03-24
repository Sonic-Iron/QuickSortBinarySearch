#include "binarysearch.h"
#include <iostream>

int binarySearch(std::vector<int> set, int toFind)
{
	int index = set.size() / 2;
	if (index == 0)
	{
		return -1;
	}
	if(set.at(index) == toFind)
	{
		std::cout << "Index : " << index << std::endl;
		return index;
	}
	else if(set.at(index) < toFind)
	{
		for (int element : std::vector<int>(set.begin(), set.begin() + index))
		{
			std::cout << element;
		}
		std::cout << std::endl;
		return binarySearch(std::vector<int>(set.begin(), set.begin() + index), toFind);
	}
	else if(set.at(index) < toFind)
	{
		return binarySearch(std::vector<int>(set.begin() + index, set.end()), toFind);
	}
}