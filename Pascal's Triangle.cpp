#include <bits/stdc++.h>
vector<long long> nCr(int n){
  // code here
  vector<long long> C(n+1, 0);
  C[0] = 1;
  for(int i=1; i<=n; i++){
      for(int j = i; j>0; j--){
          C[j] = C[j] + C[j-1];
      }
  }
  return C;
}

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  if(n==1)
    return {{1}};
  vector<vector<long long>> ans;
  for(int i=1; i<=n; i++){
    ans.push_back(nCr(i-1));
  }
  return ans;
}
