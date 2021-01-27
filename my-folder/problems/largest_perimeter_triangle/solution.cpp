class Solution {
public:
    
    int  istriangle(int a, int b, int c){
        
        int arr[3];
        arr[0] =a;
        arr[1] =b;
        arr[2] = c;
        sort(arr,arr+3);
        if(arr[0]+arr[1]>arr[2]){
            return arr[0]+arr[1]+arr[2];
        
        
        }
        
        else return 0;
        
    }
    int largestPerimeter(vector<int>& A) {
        
      /*  int mx =0;
        
        for(int i =0; i<A.size()-2; i++){
            for(int j = i+1; j<A.size()-1; j++){
                for(int k = j+1; k<A.size(); k++){
                    mx = max( istriangle(A[i],A[j],A[k]),mx);
                }
            }
        }
        return mx;
        */
        
        sort(A.begin(),A.end());
       
        for(int i = A.size()-1; i>=2; i--){
            
            if(A[i-1]+A[i-2] > A[i]){
                return A[i]+A[i-1]+A[i-2];
            }
        }
        
        return 0;
        
        
        
        
    }
};