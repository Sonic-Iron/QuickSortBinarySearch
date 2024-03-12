// QuickSortBinarySearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
#include <vector>


std::vector<int> createData(const int LENGTH, const int MAXSIZE)
{
    std::vector<int> dataSet;
    for (int i = 0; i < LENGTH, i++)
    {
        dataSet.push_back(std::rand() % MAXSIZE);
    }
    return dataSet;

}

int main()
{
    const int maxSizeOfArray = 10;
    const int sizeOfArray = std::rand() % maxSizeOfArray;
    createData()
}


