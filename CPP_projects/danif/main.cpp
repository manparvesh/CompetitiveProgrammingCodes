#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left, *right;
};

void leverOrder(Node *root){
    if(root == NULL) return;
    queue<Node> q;
    q.push(root);
    Node temp;
    while(!q.empty()){
        temp = q.front();
        q.pop();
        cout << temp.data << " ";
        if(temp->left != null) q.push(temp->left);
        if(temp->right != null) q.push(temp->right);
    }
}

int main(){

    return 0;
}
