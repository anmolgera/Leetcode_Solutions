class TrieNode{
    public:
    bool isend;
    TrieNode*children[26];
    public:
    TrieNode(){
        isend = false;
        for(int i =0; i<26; i++){
            children[i] = NULL;
        }
    }
    
};


class Trie {
public:
    /** Initialize your data structure here. */
    //private:
    public:
    TrieNode* root;
    Trie() {
        root = new TrieNode();
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
      TrieNode * cur = root;
        int k =0;
        for(int i =0; i<word.length(); i++){
            k = word[i]-'a';
            if(cur->children[k]==NULL){
               cur->children[k] = new TrieNode();
             //cur = cur->children[k];
            }
            
             cur = cur->children[k];
            
        }
        
        cur->isend = true;
       // root = cur;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
    TrieNode * cur = root;
    for(int i =0; i<word.length(); i++){
        int k = word[i]-'a';
        cur = cur->children[k];
        if(cur==NULL) return false;
    }
        
    return cur->isend;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string word) {
    TrieNode * cur = root;
    for(int i =0; i<word.length(); i++){
        int k = word[i]-'a';
        cur = cur->children[k];
        if(cur==NULL) return false;
    }
    return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */