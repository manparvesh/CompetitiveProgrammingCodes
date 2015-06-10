#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,res,sum,c;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d %d",&a,&b);
        int ar[b];
        sum=0;res=0;
        for(c=0;c<b;c++) scanf("%d",&ar[c]);
        sort(ar,ar+b);
        for(c=b-1;c>=0;c--){
            sum+=ar[c];
            res++;
            if(sum>=a){
                break;
            }
        }
        printf("Scenario #%d:\n",i);
        if(res!=b){
            printf("%d\n\n",res);
        }else{
            printf("impossible\n");
        }
    }
    return 0;
}

