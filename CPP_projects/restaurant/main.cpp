#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    int l,b;
    while(t--){
        scanf("%d %d",&l,&b);
        int mn=(l<b?l:b);
        int area=l*b,sarea,ans;
        for(int i=mn;i>=1;i--){
            sarea=i*i;
            if(area%sarea==0){
                ans=area/sarea;
                break;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
