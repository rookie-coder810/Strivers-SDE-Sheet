// Approach 1 (Coding Ninjas)
bool searchMatrix(vector<vector<int>>& mat, int target) {
    int m = mat.size(), n = mat[0].size();
    int l = 0, h = m*n-1;
    while(l<=h){
        int mid = l + (h-l)/2;
        if(mat[mid/n][mid%n] == target)
            return true;
        else if(mat[mid/n][mid%n] > target)
            h = mid -1;
        else
            l = mid+1;
    }
    return false;
}

// Approach 2 (Leetcode)
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int r = 0, c = n-1;
        while(r < m and c >= 0 ) {
            if(matrix[r][c] == target)
                return true;
            else if(matrix[r][c] > target)
                c--;
            else
                r++;
        }
        return false;
    }
};
