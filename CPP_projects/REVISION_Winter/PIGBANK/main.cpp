#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    int e,f;
    int i,mn,c;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&e,&f);//empty and full weight in gm
        scanf("%d",&n);//no of coins used
        int ar[n][2];
        c=0;
        for(i=0;i<n;i++) scanf("%d %d",&ar[i][0],&ar[i][1]);
        for(i=0;i<n;i++) if((f-e)>ar[0][0]) c=1;
        if(c==0){
            printf("This is impossible.\n");
        }else{
            mn=(((f-e)*ar[0][0])/ar[0][1]);
            for(i=0;i<n;i++) mn=(((((f-e)*ar[i][0])/ar[i][1])<mn)?(((f-e)*ar[i][0])/ar[i][1]):mn);
            printf("The minimum amount of money in the piggy-bank is %d.\n",mn);
        }
    }
    return 0;
}
