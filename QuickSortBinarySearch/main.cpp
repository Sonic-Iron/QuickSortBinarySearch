#include <iostream>
#include <vector>

#include "quicksort.h"
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

std::vector<mixedVal> createMixedData(const int LENGTH, const int MAXSIZE)
{
    std::vector<mixedVal> dataSet;
    for (int i = 0; i < LENGTH; i++)
    {
        mixedVal value;

        switch (std::rand() % 3) {
        case 0:
            value.i = std::rand() % MAXSIZE;
        case 1:
            value.c = std::rand() % 26;
        default:
            value.i = std::rand() % MAXSIZE;
        }
        dataSet.push_back(value);
    }
    return dataSet;
}

int main()
{
    srand((unsigned int)time(NULL));

    const int MAXSIZE = 20;
    const int NUMELEMENTS = 20;

    std::vector<int> dataSet = createData(NUMELEMENTS, MAXSIZE);
    std::vector<mixedVal> mixedDataSet = createMixedData(NUMELEMENTS, MAXSIZE);
    for (mixedVal value : mixedDataSet)
    {
        std::cout << value.i << value.c;
    }
    std::cout << std::endl;

    dataSet = quickSort(dataSet);
    std::vector<int> set = { 1,2,3,4 };
    binarySearch(set, 4);
}


