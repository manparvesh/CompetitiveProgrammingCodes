#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    int gcd;
    for(int i=1;i<=(a<b?a:b);i++){
        if((a%i==0)&&(b%i==0)){
            gcd=i;
        }
    }
    return gcd;
}

int main()
{
    int t,n,i,gc;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int ar[n];
        for(i=0;i<n;i++) scanf("%d",&ar[i]);
        gc=gcd(ar[0],ar[1]);
        for(i=0;i<n-1;i++) gc=gcd(gcd(ar[i],ar[i+1]),gc);
        for(i=0;i<n;i++) printf("%d ",ar[i]/gc);
        printf("\n");
    }
    return 0;
}
