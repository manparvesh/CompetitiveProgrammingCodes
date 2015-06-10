#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int val;
    node* next;
};

class mystack{
    node* S;
    int sz = 0;
public:
    bool isEmpty(){
        return (S==NULL);
    }
    int push(int val){
        node* N = new node();
        N->next = NULL;
        N->val = val;
        sz++;
        if (S==NULL){
            S = N;
            return  0;
        }
        node* t = S;
        while(t->next!=NULL){
            t = t->next;
        }
        t->next = N;
        return 0;
    }

    int ssize(){
        return sz;
    }

    int print(){
        node* t = S;
        while(t!=NULL){
            cout<<t->val<<" ";
            t = t->next;
        }
        return 0;
    }

    int top(){
        node* t=S;

        while(t->next!=NULL){
            t=t->next;
        }
        return t->val;
}

    mystack(){
        S = NULL;
    }
};

int main(){
    mystack* st = new mystack();

    for (int i=1; i<=10; i++){
        st->push(i);
    }
    cout<<st->ssize()<<"\n";
    st->print();
    cout<<"\n"<<st->top();
    cout<<"\n"<<st->isEmpty();
}
