// No main function
#include <bits/stdc++.h>
using namespace std;


void setZeros(vector<vector<int>> &matrix) {
	
	int n = matrix.size(), m = matrix[0].size();

    int tmp = 1;	// Indicator for 1st column - whether it should be 0 or not.
	
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;
                if (j == 0)
                    tmp = 0;
                else
                    matrix[0][j] = 0;
            }
        }
    }

    for (int i = n-1; i >= 1; i--) {
        for (int j = m-1; j >= 1; j--) {
            if (matrix[i][j] != 0) {
                if (matrix[i][0] == 0 or matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }
    }

    if (matrix[0][0] == 0) {
        for (int j = 0; j < m; j++) {
            matrix[0][j] = 0;
        }
    }

    if (tmp == 0) {
        for (int i = 0; i < n; i++) {
            matrix[i][0] = 0;
        }
    }
}
