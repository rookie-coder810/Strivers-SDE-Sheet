#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	int s = arr[0], f = arr[0];
	do{
		s = arr[s];
		f = arr[arr[f]];
	} while(s != f);

	f = arr[0];
	while(s!=f){
		s = arr[s];
		f = arr[f];
	}
	return s;
}
