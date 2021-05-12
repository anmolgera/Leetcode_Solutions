/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &A) {
    int l =0;
    int r = A.length()-1;
    int mid;  
    while(l<r){
     mid = (l+r)/2;
     if(A.get(mid)<A.get(mid+1)){
         l = mid+1;
     }
     else {
         r = mid;
     }
    }
        
    l =0;
    int peak = r;
    
    while(l<=r){
        mid = (l+r)/2;
        if(A.get(mid)<target){
            l = mid+1;
        }
        
        else if(A.get(mid)>target){
            r = mid-1;
        }
        
        else return mid;
            
    }
    l = peak;
    r = A.length()-1;
    while(l<=r){
       mid = (l+r)/2;
        if(A.get(mid)>target){
            l = mid+1;
        }
        
        else if(A.get(mid)<target){
            r = mid-1;
        }
        
        else return mid;  
      
        
    }
     return -1;   
        
    }
};