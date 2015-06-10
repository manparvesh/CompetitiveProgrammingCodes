#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,j;
    long long res;
    scanf("%d",&t);
    long long ar[5000];
    while(t--){
        scanf("%d",&n);

        for(i=0;i<n;i++){
            scanf("%lld",&ar[i]);
        }
        sort(ar,ar+n);
        res=abs(ar[1]-ar[0]);
        for(i=0;i<n;i++){
            res=(res<(abs(ar[i]-ar[1+i])))?res:(abs(ar[i]-ar[1+i]));
        }
        printf("%lld\n",res);
    }
    return 0;
}
