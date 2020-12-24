/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    
    int bs(int start, int end){
        
        if(start>end){
            return -1;
        }
        
        if(guess(start)==0){
            return start;
        }
        
        if(guess(end)==0){
            return end;
        }
        
        int mid = start+(end-start)/2;
        if(guess(mid)==0){
            return mid;
        }
        
        else if(guess(mid)==1){
            return bs(mid+1,end);
        }
        
        else return bs(start,mid);
        
        
    }
    int guessNumber(int n) {
      
        return bs(1,n);
        
        
    }
};