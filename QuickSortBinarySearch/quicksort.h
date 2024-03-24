#pragma once

#include <iostream> //include this here?
#include <vector>


union mixedVal 
{
    int i;
    char c;
};


std::vector<int> quickSort(std::vector<int> subset); //pass as a reference?


std::vector<int> inPlaceQuickSort(std::vector<int> set);



//mabye try and write a function which takes a list of any types