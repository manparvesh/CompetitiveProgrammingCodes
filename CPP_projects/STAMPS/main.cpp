#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,f,res,sum,c;
    scanf("%d",&t);
    int tt=1;
    while(t--){
        scanf("%d %d",&n,&f);
        int fr[f];
        for(int i=0;i<f;i++){
            scanf("%d",&fr[i]);
        }
        sort(fr,fr+f);
        sum=0;
        c=0;
        for(int i=f-1;i>=0;i--){
            if(sum>=n){
                break;
            }else{
                sum+=fr[i];
                c++;
            }
        }
        if(sum<n){
            printf("Scenario #%d:\nimpossible\n",tt);
        }else{
            printf("Scenario #%d:\n%d\n",tt,c);
        }
        tt++;
    }
    return 0;
}
