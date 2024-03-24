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

    const int MAXVAL = 100000;
    const int NUMELEMENTS = 21699; //21699 is the max number of elements with the current method

    std::vector<int> dataSet = createData(NUMELEMENTS, MAXVAL);

    for (int value : dataSet)
    {
        std::cout << value << " ";
    }
    std::cout << "\n" << std::endl;

    std::vector<mixedVal> mixedDataSet = createMixedData(NUMELEMENTS, MAXVAL);

    dataSet = quickSort(dataSet);
    for (int value : dataSet)
    {
        std::cout << value << " ";
    }
    std::cout << std::endl;
    std::cout << "NEXT TEST" << std::endl;
    int findValue = std::rand() % MAXVAL;
    std::cout << "The value to find is : " << findValue << std::endl;
    int idx = binarySearch(dataSet, findValue);
    std::string valueIdx = (idx == -1) ? "doesn't exist" : std::to_string(idx);
    std::cout << "The first instance of this value is around position : " << valueIdx << std::endl;
    return 0;
}
