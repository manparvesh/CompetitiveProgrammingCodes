#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,k,x;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int ar[n];
        for(i=0;i<n;i++) scanf("%d",&ar[i]);
        scanf("%d",&k);
        x=ar[k-1];
        sort(ar,ar+n);
        for(i=0;i<n;i++){
            if(x==ar[i]){
                printf("%d\n",i+1);
                break;
            }
        }
    }
    return 0;
}
