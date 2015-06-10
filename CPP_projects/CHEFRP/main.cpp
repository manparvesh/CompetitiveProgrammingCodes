#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    int n;
    while(t--){
        scanf("%d",&n);
        int ar[n];
        int flag=true;
        int sum=0,mx=10000000;
        for(int i=0;i<n;i++){
            scanf("%d",&ar[i]);
            if(ar[i]<2){
                flag=false;
            }
            sum+=ar[i];
            mx=(mx<(ar[i]-2)?mx:(ar[i]-2));
        }
        if(flag){
            int ans=sum-mx;
            printf("%d\n",ans);
        }else{
            printf("-1\n");
        }
    }
    return 0;
}
