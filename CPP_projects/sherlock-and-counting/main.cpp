#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    int n,k;
    while(t--){
        scanf("%d %d",&n,&k);
        int ans=0;
        for(int i=1;i<n;i++){
            if(i*(n-i) <= n*k){
                ans++;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
