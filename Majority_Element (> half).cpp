#include <bits/stdc++.h>
using namespace std;

int findMajorityElement(int nums[], int n) {
	// Write your code here.
	srand(unsigned(time(NULL)));
	int itr = 0, candidate, counter;
	while (true) {
		itr++;
		candidate = nums[rand() % n], counter = 0;
		for (int i = 0; i<n; i++) {
			if (nums[i] == candidate) {
				counter++;
			}
		}
		if (counter > n / 2) {
			break;
		}
		if(itr > 20)
			return -1;
	}
	return candidate;
}
