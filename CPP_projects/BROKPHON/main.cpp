#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int ar[n];
        int ans=0;
        for(int i=0;i<n;i++){
            scanf("%d",&ar[i]);
        }
        if(n<=1){
            printf("0\n");
        }else if(n==2){
            if(ar[0]!=ar[1]){
                printf("1\n");
            }else{
                printf("0\n");
            }
        }else{
            for(int i=1;i<n-1;i++){
                if(ar[i]!=ar[i-1] || ar[i]!=ar[i+1]){
                    ans++;
                }
            }
            if(ar[0]!=ar[1]){
                ans++;
            }
            if(ar[n-1]!=ar[n-2]){
                ans++;
            }
            printf("%d\n",ans);
        }
    }
    return 0;
}
