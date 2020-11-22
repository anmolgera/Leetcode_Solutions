class Solution {
public:

int paint(int i,int j, vector<vector<int>>&A){

    if(i<0 || i>=A.size() || j<0 || j>=A.size() || A[i][j]!=1){
        return 0;
    }

    A[i][j] =2;
    return 1 + paint(i+1,j,A) + paint(i-1,j,A) + paint(i,j-1,A)+paint(i,j+1,A);


}


bool expand(int i, int j, vector<vector<int>>&A, int c1){

    if(i<0 || i>=A.size() || j<0 || j>=A.size()){
        return false;
    }

    if(A[i][j]==0) A[i][j]= c1+1;
    return A[i][j]==1;

}



int shortestBridge(vector<vector<int>>& A) {


     for(int i =0, found =0; !found &&  i< A.size(); i++){

         for(int j=0; !found  && j< A.size(); j++){


             found = paint(i,j,A);


         }


     }        

     for(int c1 =2; ;c1++){

         for(int i=0; i<A.size(); i++){


             for(int j =0; j<A.size(); j++){

                 if(A[i][j]==c1 && (expand(i,j+1,A,c1) || expand(i,j-1,A,c1) || 
                      expand(i+1,j,A,c1) || expand(i-1,j,A,c1)             )){
                     return c1-2;
                 }


             }
         }



     }







}
};