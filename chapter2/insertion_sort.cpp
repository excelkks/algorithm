#include <vector>

#include "chapter2.h"

void insertionSort(std::vector<int> &seq)
{
    int key;
    for(auto itCurr = seq.begin()+1; itCurr != seq.end(); itCurr++)
    {
        key = *itCurr;
        auto itInsert = itCurr-1;
        while(itInsert >= seq.begin() && key<*itInsert)
        {
            *(itInsert+1) = *itInsert;
            itInsert--;
        }
        *(itInsert+1) = key;
    }
}
