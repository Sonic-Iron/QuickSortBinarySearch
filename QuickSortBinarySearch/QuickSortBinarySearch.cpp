// QuickSortBinarySearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
#include <vector>


std::vector<int> createData(const int LENGTH, const int MAXSIZE)
{
    std::vector<int> dataSet;
    for (int i = 0; i < LENGTH; i++)
    {
        dataSet.push_back(std::rand() % MAXSIZE);
    }
    return dataSet;
}

std::pair<std::vector<int>, std::vector<int>> quickSort(std::vector<int> subset)
{
    if (subset.size() < 2)
    {

    }
}




int main()
{
    const int MAXSIZE = 100;
    const int MAXLENGTH = 10;
    const int sizeOfArray = std::rand() % MAXLENGTH;
    std::vector<int> dataSet = createData(MAXLENGTH, MAXSIZE);
}


