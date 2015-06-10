#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        ll n,k,t;
        double temp;
        cin>>n>>k;
        vector<ll> a,b;
        vector<pair<double,int> > v;

        for (int i=0; i<n; i++){
            cin>>t;
            a.push_back(t);
        }
        for (int i=0; i<n; i++){
            cin>>t;
            b.push_back(t);
        }

        ll ans = 0ll;
        for (int i=0; i<n; i++){
            ll rt = k/a[i];
            ll pf = rt*b[i];
            if (pf>ans){
                ans = pf;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
