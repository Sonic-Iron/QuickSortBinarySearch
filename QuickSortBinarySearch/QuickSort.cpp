
#include <iostream>
#include <vector>

#include "quicksort.h"


std::vector<int> quickSort(std::vector<int> subset) //pass as a reference?
{
    if (subset.size() < 2)
    {
        return subset;
    }
    std::vector<int> Vfirst, Vsecond, VFSorted, VSSorted;
    int pivotIndex = subset.size() / 2;
    int pivot = subset.at(pivotIndex);
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
    VFSorted = quickSort(Vfirst); //cannot use the same variable name for the parameter and the left value
    VSSorted = quickSort(Vsecond);

    VFSorted.push_back(pivot);
    VFSorted.insert(VFSorted.end(), VSSorted.begin(), VSSorted.end());
    return VFSorted;
}