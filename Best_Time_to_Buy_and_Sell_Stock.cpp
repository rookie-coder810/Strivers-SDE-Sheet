#include <bits/stdc++.h> 
using namespace std;

int maximumProfit(vector<int> &prices){
    // Write your code here.
    int mini=INT_MAX, maxi=INT_MIN;
    for(int i=0; i<prices.size(); i++){
        if(prices[i]<mini) mini = prices[i];
        maxi = max(maxi, prices[i] - mini);        
    }
    return maxi;
}
