#include <bits/stdc++.h>
using namespace std;

#define end '\n'

struct node{
    int val;
    node *left;
    node *right;
};

node *insert(node *root, int value){
    if(root==NULL){
        node *n = new node();
        n->val = value;
        root=n;
        return root;
    }
    if(root->val > value){
        root->left = insert(root->left, value);
    }else if(root->val < value){
        root->right = insert(root->right, value);
    }
    return root;
}

void inorder(node *root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<< root->val <<endl;
    inorder(root->right);
}

node *minValueNode(node* n){
    struct node* current = new node;
    while (current->left != NULL){
        current = current->left;
    }
    return current;
}


node* del(node *root, int value){
    if(root==NULL) return root;
    if(value > root->val){
        root->right = del(root->right, value);
    }else if(value < root->val){
        root->left = del(root->left, value);
    }else{
        if(root->left == NULL){
            node *temp = root->right;
            free(root);
            return temp;
        }else if(root->right == NULL){
            node *temp = root->left;
            free(root);
            return temp;
        }
        node *temp = minValueNode(root->right);
        root->val = temp->val;
        root->right = del(root->right, temp->val);
    }
    return root;
}


int main(){
    ios_base::sync_with_stdio(false);
    string s;
    int pre[] = {10, 5, 1, 7, 40, 50};
    int size = sizeof( pre ) / sizeof( pre[0] );

    node *root = NULL;
    while(true){
        cin>>s;
        if(s[0]=='e'){
            break;
        }else if(s[0]=='i'){
            int n;
            cin>>n;
            root = insert(root, n);
        }else if(s[0]=='p'){
            inorder(root);
        }else if(s[0]=='d'){
            int n;
            cin>>n;
            root = del(root, n);
        }
    }
    return 0;
}
