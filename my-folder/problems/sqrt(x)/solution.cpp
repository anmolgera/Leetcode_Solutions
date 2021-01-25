class Solution {
public:
    int mySqrt(int x) {
        int left =1;
        int rig = x;
        
        //final result should be just one "step" less than the left pointer. 
        //Thats why left==rig is the terminating condition. instead of left<rig.
        while(left<=rig){
            int mid = left + (rig-left)/2;
            if(mid==x/mid){
                return mid;
            }
            
            else if(mid<x/mid){
                left = mid+1;
            }
            
            
            else rig = mid-1;
        }
        return rig;
    }
};