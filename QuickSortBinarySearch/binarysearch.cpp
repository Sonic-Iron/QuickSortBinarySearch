#include "binarysearch.h"
#include <iostream>

int binarySearch(std::vector<int> set, int toFind)
{
	int LI = 0;
	int UI = set.size();
	int index = LI + (UI - LI) / 2;
	int stepCount = 0;
	while (LI <= UI)
	{
		stepCount++;
		index = LI + (UI - LI) / 2;
		std::cout << stepCount << ") " << LI << " : " << index << " : " << UI << std::endl;
		if(toFind == set.at(index))
		{
			return index;
		}
		if (toFind > set.at(index))
		{
			LI = index + 1;
		}
		else
		{
			UI = index - 1;
		}
	}
	return -1;

}