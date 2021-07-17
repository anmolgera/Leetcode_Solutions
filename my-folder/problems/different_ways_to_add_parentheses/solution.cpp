class Solution {
public:
    vector<int> diffWaysToCompute(string expression) {
    vector<int> ans;
    int n = expression.size();
    for(int i =0; i<n; i++){
    char cur = expression[i];
    if(cur == '*' || cur =='-' || cur  =='+' ){
    vector<int> left = diffWaysToCompute(expression.substr(0,i));
    vector<int> right = diffWaysToCompute(expression.substr(i+1));
    
    for(int l =0; l<left.size(); l++){
        for(int r =0; r<right.size(); r++){
            
        if(cur=='+'){
        ans.push_back(right[r]+left[l]);    
        }
            
        else if(cur=='-'){
        ans.push_back(left[l]-right[r]);    
        }
            
        else if(cur=='*'){
        ans.push_back(right[r]*left[l]);    
        }
            
        }
    }
        
    }    
        
    }
    if (ans.empty())
            ans.push_back(stoi(expression));
    return ans;    
        
    }
};