#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node* newNode (int data){
    struct node* temp = (struct node *) malloc( sizeof(struct node) );

    temp->data = data;
    temp->left = temp->right = NULL;

    return temp;
}

node *constructTree(int pre[], int *preIndex, int key, int min, int max, int size){
    if(*preIndex >= size){
        //je veera bahar chal gya
        return NULL;
    }
    node *root = NULL;
    if(key > min && key < max){
        root = newNode(key);
        *preIndex = *preIndex + 1;
        if(*preIndex < size){
            root->left = constructTree(pre, preIndex, pre[*preIndex], min, key, size);
            root->right = constructTree(pre, preIndex, pre[*preIndex], key, max, size);
        }
    }
    return root;
}

node *constructBST(int pre[], int size){
    int preIndex = 0;
    return constructTree(pre, &preIndex, pre[0], INT_MIN, INT_MAX, size);
}

void inorder(node *root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    int pre[] = {10, 5, 1, 7, 40, 50};
    int size = sizeof( pre ) / sizeof( pre[0] );

    node *root = constructBST(pre, size);
    //inorder:
    inorder(root);
    return 0;
}
