class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
             vector<int> ans;
     for(int i =0; i<nums1.size(); i++){
         ans.push_back(nums1[i]);
     }

     for(int i=0; i<nums2.size(); i++){
         ans.push_back(nums2[i]);
     }

     sort(ans.begin(),ans.end());
     int t = ans.size();
     if(t%2){
         return ans[t/2];
     }

     else{ double d = (double)(ans[t/2] + ans[t/2 -1])/2;
            return d;
            
             }
    }
};