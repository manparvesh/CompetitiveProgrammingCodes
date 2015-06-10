#include <bits/stdc++.h>
using namespace std;

int fib(int n){
    int ans;
    ((n==0)||(n==1))?(ans = 1):(ans = fib(n-1) + fib(n-2));
    return ans;
}

int main(){
    for (int i=0; i<=45; i++){
        fib(i);
        //cout<<i<<" "<<fib(i)<<"\n";
    }
}
