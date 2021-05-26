class TrieNode{
    public:
    
    bool isend;
    TrieNode *children[26];
    
    public:
    TrieNode(){
    isend = false;
    for(int i =0; i<26; i++){
        children[i] = NULL;
    } 
        
    }
        
    
    
};


class WordDictionary {
public:
    /** Initialize your data structure here. */
    TrieNode* root;
    WordDictionary() {
        root = new TrieNode();
    }
    
    void addWord(string word) {
    TrieNode* cur = root;
    for(int i =0; i<word.length(); i++){
        
        int k = word[i]-'a';
        if(cur->children[k]==NULL){
            cur->children[k] = new TrieNode();
        }
        
        cur = cur->children[k];
    }
    cur->isend = true;    
    }
    
    bool search1(string word, TrieNode* cur){
        
     for(int i =0; i<word.length() && cur; i++){
        int k = word[i]-'a';
        if(word[i]!='.'){
            cur = cur->children[k];
        } 
         
        else{
            TrieNode* tmp = cur;
            for(int j =0; j<26; j++){
                cur = tmp->children[j];
                if(search1(word.substr(i+1),cur)){
                    return true;
                }
            }
        }
         
     }   
        
        
     return cur && cur->isend;   
        
    }
    
    bool search(string word) {
    return search1(word,root);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */