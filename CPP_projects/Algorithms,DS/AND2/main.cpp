#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ar[123456][32]={0};
int sz(ll n){
    int ans=0;
    while(n){
        n/=2;
        ans++;
    }
    return ans;
}
int main()
{
    ll i,n,mx;
    scanf("%lld",&n);
    for(i=0;i<n;i++) scanf("%d",&ar[i][0]);
    mx=sz(ar[0][0]);
    //for(i=0;i<n;i++) cout<<sz(ar[i][0])<<endl;
    for(i=0;i<n;i++){
        int temp=ar[i][0];
        int s=sz(ar[i][0]);
        mx=(mx>s?mx:s);
        for(int j=0;j<s;j++){
            ar[i][j]=temp%2;
            temp/=2;
            //cout<<ar[i][j]<<" ";
        }
        //cout<<"\n";
    }

    int mult=1,ans=0;
    for(i=0;i<mx;i++){
        int sm=0;
        for(int j=0;j<n;j++) {
            sm+=ar[j][i];
            //cout<<sm<<" ";
        }
        //sm--;
        //cout<<sm<<"*"<<mult<<endl;
        ans+=(mult*sm*(sm-1)/2);
        mult*=2;
    }
    cout<<ans<<endl;
    return 0;
}
