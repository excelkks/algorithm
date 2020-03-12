#include <iostream>
#include <vector>

#include "chapter2.h"

using namespace std;


int main(int argc, char *argv[])
{
    vector<int> seq = {3,2,7,4,5,1,8,6};
    for(auto it=seq.begin(); it!=seq.end(); it++)
        cout<<*it<<", ";
    cout<<endl;

    selectionSort(seq);

    for(auto it=seq.begin(); it!=seq.end(); it++)
        cout<<*it<<", ";
    cout<<endl;
    return 0;
}
