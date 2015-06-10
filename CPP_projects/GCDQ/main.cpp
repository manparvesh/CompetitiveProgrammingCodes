#include <bits/stdc++.h>
using namespace std;
int a[123456];
int main()
{
    int t,n,q,i,l,r,j,ans;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&q);
        for(i=0;i<n;i++) scanf("%d",&a[i]);
        for(i=0;i<q;i++){
            vector<int> v;
            scanf("%d %d",&l,&r);
            for(j=0;j<n;j++){
                if(!(j>=(l-1) && j<=(r-1))){
                    v.push_back(a[j]);
                }
            }
        ans=v[0];
        for(j=0;j<v.size()-1;j++){
                ans=__gcd(ans,v[j+1]);
            }
        printf("%d\n",ans);
        }
    }
    return 0;
}
