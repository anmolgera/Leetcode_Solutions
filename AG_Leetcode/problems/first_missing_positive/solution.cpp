class Solution {
public:
    int firstMissingPositive(vector<int>& A) {
             int i,j;
         int n = A.size();
        for(i=0;i<n;i++){
            int cur=A[i];
            // if in place or non-pos or out of bounds, skip.
            if(cur==i+1||cur<=0||cur>n)continue;
            swap(A[i],A[cur-1]);
            // if not the same, then reprocess it.
            if(A[i]!=A[cur-1])
                i--;
        }
        
        for(i=0;i<n;i++)
            if(A[i]!=i+1) 
                return i+1;
        return n+1;
    }
};