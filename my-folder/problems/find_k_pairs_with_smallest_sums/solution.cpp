class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k1)     {
        priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>> , greater<pair<int,pair<int,int>>>>pq;
        vector<vector<int>> ans;
        
        for(int i =0; i<nums1.size(); i++){
            pq.push({nums1[i]+nums2[0],{i,0}});
        }
        
        int n = nums2.size();
        
        while(!pq.empty() && k1-->0){
            auto k = pq.top();
            pq.pop();
            int sum = k.first;
            int i = k.second.first;
            int j = k.second.second;
            vector<int> v = {nums1[i],nums2[j]};
            ans.push_back(v);
            if(j+1==n) continue;
            pq.push({nums1[i]+nums2[j+1],{i,j+1}});
            //k1--;
        }
        
        return ans;
        
    }
};