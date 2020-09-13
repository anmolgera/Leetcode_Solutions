class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
    
        
       /*nordered_set<int> s;
        unordered_set<int>s1;
        vector<bool> flag(mat.size()*mat.size(),0);
        vector<bool> flag1(mat.size()*mat.size(),0);
        
         for(int i =0; i<mat.size(); i++){
            for(int j =0; j<mat[0].size(); j++){
                if(mat[i][j]==1 && s.find(i)==s.end() && s1.find(j)==s1.end()){
                    
                    s.insert(i);
                    s1.insert(j);
                    count++;
                }
                
                else if(mat[i][j]==1 && (s.find(i)!=s.end() && flag[i]==0 || s1.find(j)!=s1.end() && flag1[j]==0)){
                    
                    flag[i] =1;
                    flag[j] =1;
                    
                    count--;
                }
                
                
                
                //else continue;
                //cout<<count<<endl;
                
            }
            
            //cout<<count<<" ";
            
            
        }
        
    */
        
        
       /* vector<vector<int>>sex = mat;
        vector<vector<int>>sex1 = mat;
        
        for(int i =0; i<sex.size(); i++){
            
            for(int j =1; j<sex[0].size(); j++){
                
                sex[i][j] += sex[i][j-1];
                
            }
        }
        
         for(int i =1; i<sex1[0].size(); i++){
            
            for(int j =0; j<sex1.size(); j++){
                
                sex1[i][j] = sex1[i-1][j];
                
            }
        }
        
        int i = sex1.size()-1;
        int x = sex[0].size()-1;
        for(int j =0,y = 0; j<sex1[0].size(), y<sex.size(); j++,y++){
            if(sex1[i][j]==1 && sex[x][y]==1 ){
                count++;
                
                
            }
            
        }
        
        */
        
        
        
        
        vector<pair<int,int>> v;
        
        
        
        
        for(int i =0; i<mat.size(); i++){
            
            
            for(int j =0; j<mat[0].size(); j++){
                
                
                
                if(mat[i][j]==1){
                    
                    v.push_back({i,j});
                }
            }
        }
        
        int count =0;
        
        for(int i =0; i<v.size(); i++){
            
            int x = v[i].first;
            int y = v[i].second;
            int flag = 0;
            int flag1 = 0;
            
            for(int j =0; j<mat[0].size(); j++){
                
                if(mat[x][j]==1){
                    flag++;
                }
                
            }
            
            
            for(int j =0; j<mat.size(); j++){
                
                if(mat[j][y]==1){
                    
                    flag1++;
                }
                
            }
            
            if(flag==1 && flag1==1){
                
                count++;
            }
            
            
            
            
        }
        
        
       return count; 
        
        
        
    }
};