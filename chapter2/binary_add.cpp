#include <vector>
#include "chapter2.h"

std::vector<int> binaryAdd(std::vector<int> A, std::vector<int> B)
{
    std::vector<int> C(A.size()+1);
    int carry = 0;
    for(auto i = A.size()+1; i>0; i--)
    {
        C[i] = (A[i-1]+B[i-1]+carry)%2;
        if(A[i-1]+B[i-1]+carry >= 2)
            carry = 1;
        else
            carry = 0;
    }
    C[0]=carry;
    return C;
}
