#include <bits/stdc++.h>
int MOD = 2e9;

int nCr(int n, int r) {
	if(r > n-r)
		r = n-r;
	long long C[r+1];
	memset(C, 0, sizeof(C));
	C[0] = 1;
	for(int i=1; i<=n; i++) {
		for(int j = min(i, r); j>0; j--){
			C[j] = (C[j] + C[j-1])%MOD;
		}
	}
	return C[r];
}
int uniquePaths(int m, int n) {
	// Write your code here.
	return nCr(m+n-2, n-1);
}
