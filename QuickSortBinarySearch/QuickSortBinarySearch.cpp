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

std::vector<int> quickSort(std::vector<int> subset)
{
    int pivot = subset.at(subset.size() / 2);
    std::vector<int> v1, v2;
    for (int element : subset)
    {
        if (element <= pivot)
        {
            v1.push_back(element);
        }
        else{
            v2.push_back(element);
        }
    }
    if (v1.size() > 1)
    {
        std::vector<int> v1 = quickSort(v1);
    }
    if (v2.size() > 1)
    {
        std::vector<int> v2 = quickSort(v2);
    }
    v1.insert(v1.end(), v2.begin(), v2.end()); //how does this modify v1 without creating a new variable?
    return v1;
}




int main()
{
    const int MAXSIZE = 100;
    const int MAXLENGTH = 10;
    const int sizeOfArray = std::rand() % MAXLENGTH;

    std::vector<int> dataSet = createData(MAXLENGTH, MAXSIZE);

    for (int i : dataSet)
    {
        std::cout << i;
    }
    std::cout << std::endl;

    dataSet = quickSort(dataSet);
    
    for (int i : dataSet)
    {
        std::cout << i;
    }
    std::cout << std::endl;
}


