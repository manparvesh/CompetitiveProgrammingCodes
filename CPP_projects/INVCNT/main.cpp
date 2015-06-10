#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int ar[n];
        for(int i=0;i<n;i++){
            scanf("%d",&ar[i]);
        }
        int ans=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(ar[i]>ar[j]){
                    ans++;
                }
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
