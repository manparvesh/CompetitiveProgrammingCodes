#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define CharIndex(x) ((int)(c - 'a'))
#define pb push_back
#define vc vector<char>
#define BS(v,n) binary_search(v.begin(), v.end(), n)
#define all(v) v.begin(),v.end()

struct node{
    int value;
    node *children[26];
};

struct trie{
    node *root;
    int count;
};

//create new node
node *getNode(void){
    node *n = NULL;
    n = (node *) malloc(sizeof(node));

    if(n){
        n->value = 0;
        for(int i=0;i<26;i++){
            node->children[i] = NULL;
        }
    }
}

//initialize the trie
void initialize(trie *t){
    t->root = getNode();
    t->count = 0;
}

//if not present, inserts key into tree
// if key is prefix of trie node, just marks leaf node
void insert(trie *t, char key[]){
    int level, length = strlen(key), index;
    node *crawl;

    t->count++;
    crawl = t->root;

    for(level = 0; level<length;level++){
        index = CharIndex(key[level]);
        if()
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    node *root;
    root->c = ' ';



    return 0;
}
