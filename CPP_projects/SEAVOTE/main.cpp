#include <bits/stdc++.h>
using namespace std;
int ar[12345];
int main()
{
    int t,n,sum,temp,i;
    scanf("%d",&t);
    while(t--){
        sum=0;
        bool flag=true;
        scanf("%d",&n);
        for (i=0;i<n;i++){
            scanf("%d",&temp);
            if(temp>100) flag=false;
            sum+=temp;
        }
        if((sum>=(100+n))||sum<100){
            flag=false;
        }
        if(flag){
            puts("YES");
        }else{
            puts("NO");
        }
    }
    return 0;
}
