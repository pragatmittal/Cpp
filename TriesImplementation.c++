#include <iostream>
#include <algorithm>
using namespace std;
class trieNode{
    public: 
    char data;
    trieNode *children[26];
    bool isterminal;


    trieNode(char ch){
        data =ch;
        for(int i=0;i<26;i++){
            children[i]=NULL;

        }
        isterminal=false;


    }

};
class trie{
    public:
    trieNode *root;
    trie(){
        root=new trieNode('\0');

    }
    void insertutil(trieNode*root,string word){
        if(word.length()==0)
            root->isterminal=true;
            return ;
        int index=word[0]-'A';
        trieNode*child;
        if(root->children[index]!=NULL)
            child=root->children[index];
        else{    
            child=new trieNode(word[0]);
            root->children[index]=child;
        }
        insertutil(child, word.substr(1));
        }

    void insertword(string word){
            insertutil(root,word);
            }
    
    bool searchutil(trieNode *root, string word){
        if(word.length()==0)
            return root->isterminal;

        int index=word[0]-'A';
        trieNode* child;
        
        if(root->children[index]!=NULL)
            child=root->children[index];
        
        else 
            return false;

        return searchutil(child,word.substr());
        
        }


        bool search(string word){
            return searchutil(root ,word );

    }
};
int main() {
    trie *t = new trie();
    t->insertword("HELLO");
    cout << t->search("HELLO") << endl; // Should print 1 (true)
    cout << t->search("HELL") << endl;  // Should print 0 (false)
    return 0;
}