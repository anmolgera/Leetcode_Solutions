class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        
        int s =0;
        int e = A.size()-1;
        
        while(s<e){
            int mid = s+ (e-s)/2;
            
            if(A[mid] <A[mid+1]){
                
                s = mid+1;
                
            }
            
            else e = mid;
            
            
            
        }
        
        
        return s;
        
    }
};