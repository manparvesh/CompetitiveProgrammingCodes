#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll down[55][123456];
ll a[123456];
int main()
{
    ll n,i;
    scanf("%lld",&n);
    //int a[n];
    for(i=1;i<=n;i++) {scanf("%lld",&a[i]);}

    for (ll i=0; i<=50; i++){
        down[i][n] = 0;
        for (ll j=n-1; j>=1; j--){
            ll mask = ((1ll)<<i);
            down[i][j] = down[i][j+1];
            if ((a[j+1]&mask))
            down[i][j]++;
            //cout<<"down "<<i<<" "<<j<<" "<<down[i][j]<<"\n";
        }
    }
    ll ans = 0ll;
    for (ll i=0; i<=50; i++){
        ll wt = ((1ll)<<i);
        ll sum=0;
        for (ll j=1ll; j<n; j++){
            ll v=a[j]&wt;
            if(v!=0)
                sum+=down[i][j];
        }
        //cout<<i<<" "<<sum<<"\n";
        ans+=(sum*wt);
    }
    cout<<ans<<"\n";
    return 0;
}
