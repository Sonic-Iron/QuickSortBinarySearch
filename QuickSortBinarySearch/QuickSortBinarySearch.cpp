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
    if (subset.size() < 2) {
        std::cout << "Too small" << subset.size()  << std::endl;

        return subset;
    }
    int pivot = subset.at(subset.size() / 2);
    std::vector<int> vfirst, vsecond, vfirstsorted, vsecondsorted;
    for (int element : subset)
    {
        if (element <= pivot)
        {
            vfirst.push_back(element);
        }
        else{
            vsecond.push_back(element);
        }
    }
    if (vfirst.size() > 2)
    {
        std::cout << "Here" << vfirst.size() << std::endl;
        std::vector<int> vfirstsorted = quickSort(vfirst); //deletes variable name before calculating? Doesn't do this in python
    }
    if (vsecond.size() > 2)
    {
        std::cout << "There" << vsecond.size() << std::endl;
        std::vector<int> vsecondsorted = quickSort(vsecond);
    }

    std::cout << vfirstsorted.size() << " " << vsecondsorted.size() << std::endl;

    vfirstsorted.insert(vfirstsorted.end(), vsecondsorted.begin(), vfirstsorted.end()); //how does this modify v1 without creating a new variable?
    return vfirstsorted;
}




int main()
{
    srand((unsigned int)time(NULL));

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


