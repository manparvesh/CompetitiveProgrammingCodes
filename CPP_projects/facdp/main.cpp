//memoization
#include <bits/stdc++.h>
using namespace std;

int f[1600001];

int fib(int n){
    int ans;
    if (f[n]!=0){return f[n];}
    ((n==0)||(n==1))?(ans = 1):(ans = fib(n-1)*n);
    f[n] =  ans;
    if (!ans){return 1;}
    return ans;
}

int main(){
    for (int i=1; i<=1600000; i++){
        fib(i);
        //cout<<i<<" "<<fib(i)<<"\n";
    }
    cout<<fib(5)<<"\n";
}
