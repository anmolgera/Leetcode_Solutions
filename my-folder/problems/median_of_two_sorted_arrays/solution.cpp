class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int m = nums1.size();
    int n = nums2.size();
    
    vector<int> ans;
    for(int i =0; i<m; i++){
        ans.push_back(nums1[i]);
    }
        
    for(int i =0; i<n; i++){
        ans.push_back(nums2[i]);
    }
        
    sort(ans.begin(),ans.end());
    
    int t = ans.size();
    if(t%2){
    return ans[t/2];    
    }
    else {
        return (double)(ans[t/2-1]+ ans[t/2])/2;
    }
    
    
    }
};