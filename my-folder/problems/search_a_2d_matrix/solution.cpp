class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
    int m = matrix[0].size();
    if(n==0 || m==0){
        return false;
    }
    
    int l =0;
    int r = m*n-1;
    int mid;
    while(l<r){
        mid = l+(r-l)/2;
        if(matrix[mid/m][mid%m]==target) {
           return true;
        }
        else if(matrix[mid/m][mid%m]>target){
            r = mid-1;
        }
        else {
            l = mid+1;
        }
        
    }
        
    return matrix[l/m][l%m] == target;    
    }
};