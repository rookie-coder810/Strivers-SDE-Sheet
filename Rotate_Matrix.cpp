#include <bits/stdc++.h>
using namespace std;

void rotateMatrix(vector<vector<int>> &mat, int n)
{
    // Write your code here
    
    // Transpose
    for(int i=0; i<n; i++)
        for(int j=0; j<i; j++)
            swap(mat[i][j], mat[j][i]);
        
    // and then Reverse
    for(int i=0; i<m; i++)
        reverse(mat[i].begin(), mat[i].end());  
}
