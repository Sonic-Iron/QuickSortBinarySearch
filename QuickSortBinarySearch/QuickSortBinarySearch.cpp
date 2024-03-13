// QuickSortBinarySearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <random>

#include "quicksort.h"
#include "mergesort.h"
#include "binarysearch.h"


std::vector<int> createData(const int LENGTH, const int MAXSIZE)
{
    std::vector<int> dataSet;
    for (int i = 0; i < LENGTH; i++)
    {
        int num = std::rand() % MAXSIZE;
        dataSet.push_back(num);
    }
    return dataSet;
}


int main()
{
    srand((unsigned int)time(NULL));

    const int MAXSIZE = 20;
    const int NUMELEMENTS = 20;

    std::vector<int> dataSet = createData(NUMELEMENTS, MAXSIZE);

    //for (int i : dataSet)
    //{
    //    std::cout << i << std::endl;
    //}

    dataSet = quickSort(dataSet);
}


