#ifndef SELECTION_SORT_CPP_V3WLJB4E
#define SELECTION_SORT_CPP_V3WLJB4E

#include <vector>
void selectionSort(std::vector<int> &seq)
{
    int swapTemp;
    for(auto it=seq.begin(); it != seq.end()-1; it++)
    {
        auto min = it;
        for(auto itSel = it; itSel != seq.end(); itSel++)
            if(*itSel < *min)
                min = itSel;
        swapTemp = *min;
        *min = *it;
        *it = swapTemp;
    }
}

#endif /* end of include guard: SELECTION_SORT_CPP_V3WLJB4E */
