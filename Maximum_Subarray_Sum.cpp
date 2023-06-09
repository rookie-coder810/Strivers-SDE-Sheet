#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int nums[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long maxi = nums[0], sum = 0;
    for(int i=0; i<n; i++) {
        sum+=nums[i];
        maxi = max(maxi, sum);
        if(sum < 0)
            sum = 0;
    }
    return maxi>0? maxi : 0;
}
