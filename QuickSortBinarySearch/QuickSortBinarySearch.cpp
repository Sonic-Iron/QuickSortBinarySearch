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
        int num = std::rand() % MAXSIZE;
        dataSet.push_back(num);
    }
    return dataSet;
}

std::vector<int> quickSort(std::vector<int> subset) //pass as a reference?
{
    if (subset.size() < 2)
    {
        return subset;
    }
    std::vector<int> Vfirst, Vsecond, VFSorted, VSSorted;
    int pivotIndex = subset.size() / 2;
    int pivot = subset.at(pivotIndex);
    //std::cout << subset.size();
    subset.erase(subset.begin() + pivotIndex);
    for (int element : subset)
    {
        if (element <= pivot)
        {
            Vfirst.push_back(element);
        }
        else
        {
            Vsecond.push_back(element);
        }
    }
    //for (int i : vfirst)
    //{
    //    std::cout << i << " ";
    //}
    //std::cout << " : " << pivot << " : ";
    //for (int i : vsecond)
    //{
    //    std::cout << i << " ";
    //}
    //std::cout << std::endl;
    VFSorted = quickSort(Vfirst); //cannot use the same variable name for the parameter and the left value
    VSSorted = quickSort(Vsecond);

    VFSorted.push_back(pivot);
    VFSorted.insert(VFSorted.end(), VSSorted.begin(), VSSorted.end());
    
    //for (int i : VFSorted)
    //{
    //    std::cout << i << " ";
    //}
    //std::cout << std::endl;
    
    return VFSorted;
}

std::vector<int> inPlaceQuickSort(std::vector<int> set)
{

}

std::vector<int> binarySearch(std::vector<int> set)
{

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


