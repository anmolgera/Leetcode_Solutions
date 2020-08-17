class Solution {
public:
   bool searchMatrix(vector<vector<int>>& matrix, int target) {
    if (matrix.size()==0) return false;

    for(int i=0; i<matrix.size(); i++){
        if( searchVector(matrix[i], target) ) return true;
    }
    return false;
 }

bool searchVector(vector<int>& v, int target) {
    int left = 0, right = v.size() - 1;

    while (left <= right) {
	int mid = left + (right - left) / 2;
	if (v[mid] == target)
		return true;
	if (v[mid] < target)
		left = mid + 1;
	else
		right = mid - 1;
    }

    return false;
 }
      
    
};