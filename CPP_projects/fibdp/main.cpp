//memoization
#include <bits/stdc++.h>
using namespace std;

int f[450001];

int fib(int n){
    int ans;
    if (f[n]!=0){return f[n];}
    ((n==0)||(n==1))?(ans = 1):(ans = fib(n-1) + fib(n-2));
    f[n] =  ans;
    return ans;
}

int main(){
    for (int i=0; i<=45; i++){
            //fib(i);
        cout<<i<<" "<<fib(i)<<"\n";
    }
}
