#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s){

   sort(arr.begin(), arr.end());
   vector<vector<int>> pairs;

   int j = 0, n = arr.size();

   for(int i = 1; i < n; i++) {   

      int sum = arr[j] + arr[i];

      if(sum == s)
         pairs.push_back({arr[j], arr[i]});

      if((sum > s) || ((i == n-1) && (j<n))) {  
         j++;
         i = j;
      }
   }

   return pairs;
}
