#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,a;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        a=1;
        for(i=1;(i*(i+1)/2)<=n;i++) a=i*(i+1)/2;
        printf("%d/%d",(n-a)+1,i-(n-a)-1);
    }
    return 0;
}
