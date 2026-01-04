#include <iostream>
using namespace std;

class TrieNode{
public:
    TrieNode* child[26];
    bool isEnd;

    TrieNode(){
        isEnd = false;
        for(int i = 0; i < 26; i++)
            child[i] = nullptr;
    }
};

class Trie{
    TrieNode* root;

public:
    Trie(){
        root = new TrieNode();
    }

    void insert(string word){
        TrieNode* node = root;
        for(char ch : word){
            int i = ch - 'a';
            if(node->child[i] == nullptr){
                node->child[i] = new TrieNode();
            }
            node = node->child[i];
        }
        node->isEnd = true;
    }

    bool search(string word){
        TrieNode* node = root;
        for(char ch : word){
            int i = ch - 'a';
            if(node->child[i] == nullptr)
                return false;
            node = node->child[i];
        }
        return node->isEnd;
    }
};

int main(){
    Trie t;
    t.insert("apple");
    t.insert("almond");
    t.insert("rohan");
    t.insert("rohit");
    t.insert("vicky");

    cout << t.search("roni"); // 0
    cout << t.search("rohit"); // 1
}
