#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i;
    scanf("%d",&t);
    long long m,m2;
    while(t--){
        scanf("%d %lld",&n,&m);
        m2=0;
        int ar[n];
        for(i=0;i<n;i++){
            scanf("%d",&ar[i]);
        }
        for(i=0;i<n;i++){
            m2+=ar[i];
        }
        if(m2<=m){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
    return 0;
}
