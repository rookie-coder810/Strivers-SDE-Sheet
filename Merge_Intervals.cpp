#include <bits/stdc++.h> 
using namespace std;
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    sort(intervals.begin(), intervals.end());
    stack<vector<int>> st;
    st.push(intervals[0]);
    for(int i=1; i<intervals.size(); i++){
        if(intervals[i][0]<=st.top()[1]){
            st.top()[1] = max(st.top()[1], intervals[i][1]);
        }
        else
            st.push(intervals[i]);
    }
    vector<vector<int>> ans;
    int s = st.size();
    while(s--){
        ans.push_back(st.top());
        st.pop();
    }
    sort(ans.begin(), ans.end());
    return ans;
}
