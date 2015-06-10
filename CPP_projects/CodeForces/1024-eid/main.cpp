#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b){
    while (a%b){
        ll rem = a%b;
        a = b;
        b = rem;
    }
    return b;
}

ll g(ll a, ll b){
    return (a%b)?(g(b,a%b)):(b);
}

ll lcm(ll a, ll b){
    return (a*b)/g(a,b);
}

int main(){
    freopen("in.txt","r",stdin);
    int test;
    cin>>test;
    ll a,b,n;
    for (int i=1; i<=test; i++){
        cin>>n;
        cin>>a>>b;
        ll l = lcm(a,b);
        for (int j=2; j<n; j++){
            cin>>a;
            l = lcm(a,l);
        }
        cout<<"Case "<<i<<": "<<l<<endl;
    }
}
