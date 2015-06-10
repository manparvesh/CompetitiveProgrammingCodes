#include <bits/stdc++.h>
using namespace std;

int fib(int n){
    int ans;
    ((n==0)||(n==1))?(ans = 1):(ans = fib(n-1)*n);
    return ans;
}

//n = 2*10^8

int main(){
    for (int i=0; i<=16000; i++){
        fib(i);
        //cout<<i<<" "<<fib(i)<<"\n";
    }
}
