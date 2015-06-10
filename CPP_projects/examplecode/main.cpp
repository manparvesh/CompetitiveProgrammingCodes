#include <bits/stdc++.h>
using namespace std;

class mystack{
    int data[123];
    int sp = -1;

    public: bool isEmpty(){
        return (sp==-1);
    }
    int push(int val){
        sp++;
        data[sp] = val;
        return 0;
    }
    int pop(){
        int val= data[sp];
        sp--;
        return val;
    }
    int peek(){
        if (isEmpty()){cout<<"stack is empty\n"; return 0;}
        return data[sp];
    }

    int ssize(){
        return sp+1;
    }

    mystack(){
        sp = -1;
    }
};

int main(){
    mystack* st = new mystack();

    for (int i=1; i<=10; i++){
        st->push(i);
    }
    cout<<st->ssize()<<"\n";
    while(!st->isEmpty()){
        cout<<st->peek()<<"\n";
        st->pop();
    }
}
