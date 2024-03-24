#include <iostream>
#include <vector>
#include <string>

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

    const int MAXVAL = 20;
    const int NUMELEMENTS = 20;

    std::vector<int> dataSet = createData(NUMELEMENTS, MAXVAL);
    std::vector<mixedVal> mixedDataSet = createMixedData(NUMELEMENTS, MAXVAL);
    for (mixedVal value : mixedDataSet)
    {
        std::cout << value.i << value.c;
    }
    std::cout << std::endl;

    dataSet = quickSort(dataSet);
    std::cout << "NEXT TEST" << std::endl;
    int findValue = std::rand() % MAXVAL;
    std::cout << "The value to find is : " << findValue << std::endl;
    int idx = binarySearch(dataSet, findValue);
    std::string valueIdx = (idx == -1) ? "doesn't exist" : std::to_string(idx);
    std::cout << "The first instance of this value is at position : " << valueIdx << std::endl;
}


