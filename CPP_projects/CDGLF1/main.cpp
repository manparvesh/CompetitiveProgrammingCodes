#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&k);
        int ar[n];
        for(int i=0;i<n;i++){
            scanf("%d",&ar[i]);
        }
        sort(ar,ar+n);
        int ans=0;
        for(int i=0;i<k;i++){
            if(ar[i]>=0){
                break;
            }
            ans+=ar[i];
        }
        printf("%d\n",(-1*ans));
    }
    return 0;
}
