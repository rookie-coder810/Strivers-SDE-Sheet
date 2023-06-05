#include <bits/stdc++.h> 
using namespace std;

void sort012(int *nums, int n)
{
   //   Write your code here
   int low=0, mid = 0, high = n-1;
   while(mid<=high) {
      if(nums[mid] == 0)
            swap(nums[low++], nums[mid++]);
      else if(nums[mid] == 1)
            mid++;
      else
            swap(nums[mid], nums[high--]);
   }
}
