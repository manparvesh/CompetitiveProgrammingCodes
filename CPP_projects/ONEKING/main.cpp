#include <bits/stdc++.h>
using namespace std;
char ar[2111];
int main()
{
    int t,n,i,l,r,j,ans;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        ans=0;
        int m=1;
        for(i=0;i<n;i++){
            scanf("%d %d",&l,&r);
            ar[l]='[';
            ar[r]=']';
            m=(r>m?r:m);
        }
        int temp=0;
        for(i=1;i<=m;i++) {
            if(ar[i]=='['){
                temp++;
            }
            if(ar[i]==']' && temp!=0){
                temp=0;
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
