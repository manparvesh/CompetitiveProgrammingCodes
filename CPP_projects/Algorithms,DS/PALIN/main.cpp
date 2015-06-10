#include <bits/stdc++.h>
using namespace std;

int rev(int& b){
    int rem=0,n=b;
    for (int a=0;n>0;a++){
        rem=10*rem+n%10;
        n/=10;
    }
    return rem;
}

bool isPali(int n){
    if (n==rev(n)) {return true;}
    return false;
}

int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf()
    }
    return 0;
}
