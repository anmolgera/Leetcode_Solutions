class Solution {
public:
    vector<int> threeEqualParts(vector<int>& A) {
      int ones =0;
     
        for(int i =0; i<A.size(); i++){
            
            if(A[i]==1){
                ones++;
            }
        }
        
        int n = A.size();
         if(ones ==0){
             return {0,n-1};
         }     
        
        if(ones%3){
            return {-1,-1};
        }
        
        
        int k = ones/3;
        int firstone =0;
        vector<int> pos;
        for(int i =0; i<A.size(); i++){
            if(A[i]==1){
                firstone++;
            }
            
            if(firstone==1 && A[i]==1){
                pos.push_back(i);
            }
            
            if(firstone==k){
                firstone=0;
            }
        }
        
        int start =  pos[0];
        int mid  = pos[1];
        int end = pos[2];
        
        while(end<A.size() && A[start]==A[mid] && A[mid]==A[end]){
            start++;
            mid++;
            end++;
        }
        
        
        if(end==A.size()){
            return {start-1,mid};
        }
        
        return {-1,-1};
        
        
        
        
        
    }
};