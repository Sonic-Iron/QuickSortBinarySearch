#pragma once

#include <iostream> //include this here?
#include <vector>

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
    for (int i : Vfirst)
    {
        std::cout << i << " ";
    }
    std::cout << " : " << pivot << " : ";
    for (int i : Vsecond)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    VFSorted = quickSort(Vfirst); //cannot use the same variable name for the parameter and the left value
    VSSorted = quickSort(Vsecond);

    VFSorted.push_back(pivot);
    VFSorted.insert(VFSorted.end(), VSSorted.begin(), VSSorted.end());

    for (int i : VFSorted)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return VFSorted;
}

std::vector<int> inPlaceQuickSort(std::vector<int> set)
{
    int pivotIndex = set.size() / 2;


}

template<typename T>
std::vector<T> 



//mabye try and write a function which takes a list of any types