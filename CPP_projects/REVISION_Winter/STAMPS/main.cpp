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
        for(c=1;c<b;c++) ar[c]=ar[c]+ar[c-1];
        c=0;
        while(1){
            if(ar[c]<a){
                res++;c++;
            }else{
                break;
            }
        }
        printf("%d\n",res);
    }
    return 0;
}
