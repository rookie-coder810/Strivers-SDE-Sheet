#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElementII(vector<int> &arr)
{
    int n = arr.size();

    int probable_ele1 = 1e6, probable_ele2 = 1e6;
    int cnt1 = 0, cnt2 = 0;
    
    for (int i = n-1; i >= 0; i--) {
        if (cnt1 == 0 and probable_ele2 != arr[i]) {
            cnt1 = 1;
            probable_ele1 = arr[i];
        }
        else if (cnt2 == 0 and probable_ele1 != arr[i]) {
            cnt2 = 1;
            probable_ele2 = arr[i];
        }
        else if (arr[i] == probable_ele1) cnt1++;
        else if (arr[i] == probable_ele2) cnt2++;
        else {
            cnt1--;
            cnt2--;
        }
    }

    vector<int> ans;

    cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == probable_ele1) cnt1++;
        if (arr[i] == probable_ele2) cnt2++;
    }

    int mini = int(n / 3) + 1;
    if (cnt1 >= mini) ans.push_back(probable_ele1);
    if (cnt2 >= mini) ans.push_back(probable_ele2);

    return ans;
}
