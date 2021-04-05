class Solution {
public:
    int trap(vector<int>& height) {
    int ans =0;
    int n = height.size();
    
    vector<int> leftmax(n,0);
    vector<int> rightmax(n,0);
    
    if(n==0){
        return 0;
    }
    
    leftmax[0] = height[0];
    for(int i =1; i<n; i++){
        leftmax[i] = max(leftmax[i-1],height[i]);
    }
    
    rightmax[n-1] = height[n-1];
    for(int i = n-2; i>=0; i--){
        rightmax[i] = max(rightmax[i+1],height[i]);
    }
        
    for(int i =0; i<n; i++){
    ans+=min(rightmax[i],leftmax[i])-height[i];    
    }
    
    return ans;
    
    }
};