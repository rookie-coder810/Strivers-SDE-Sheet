#include <bits/stdc++.h>
using namespace std;

vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    vector<int> ans;
    int k;
    for(k = n-2; k>=0; k--)
        if(permutation[k] < permutation[k+1])
            break;
    if(k==-1)
        return sort(permutation.begin(), permutation.end()), permutation;
    int l = n-1;
    for(l; l>k; l--)
        if(permutation[l] > permutation[k]){
            swap(permutation[l], permutation[k]);
            sort(permutation.begin()+k+1, permutation.end());
            break;
        }
    return permutation;
}
