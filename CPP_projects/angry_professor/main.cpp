#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d %d",&n,&k);
        int ar[n];
        int ct=0;
        for(int i=0;i<n;i++){
            scanf("%d",&ar[i]);
            if(ar[i]<=0){
                ct++;
            }
        }
        if(ct>=k){
            printf("NO\n");
        }else{
            printf("YES\n");
        }
    }
    return 0;
}
