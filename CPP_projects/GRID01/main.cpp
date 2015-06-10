#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    int n,m;
    while(t--){
        scanf("%d %d",&n,&m);//we have a matrix with dimensions n X m
        int ans;
        if(n>m){
            int temp=n;
            n=m;
            m=temp;
        }
        if(n==1 && m==1){
            ans=0;
        }else if(n==1){
            ans=(m-2)*2 + 2;
        }else{
            ans=12 + (n-2+m-2)*5*2;
            if(n>2 && m>2){
                ans+=((n-2)*(m-2)*8);
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
