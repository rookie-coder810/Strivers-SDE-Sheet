#include <bits/stdc++.h>
using namespace std;

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	int xor1 = 0;


    for (int i = 0; i < n; i++) {
      xor1 = xor1 ^ arr[i];
      xor1 = xor1 ^ (i+1);
    }

    int set_bit_no = (xor1) & ~(xor1 - 1);
    int y = 0;
    int x = 0;

    for (int i = 0; i < n; i++) {
        if ((arr[i] & set_bit_no) != 0)
            x = x ^ arr[i];
        else
            y = y ^ arr[i];
    }

    for (int i = 1; i <= n; i++) {
        if ((i & set_bit_no) != 0)
            x = x ^ i;
        else
            y = y ^ i;
    }

	int cnt = 0;
	for(int i=0; i<n; i++){
		if(arr[i]==x) cnt++;
	}

	if(cnt==2)
		return {y,x};
	return {x,y};
}
