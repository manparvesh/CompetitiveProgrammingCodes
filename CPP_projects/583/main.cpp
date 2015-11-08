#include <bits/stdc++.h>
using namespace std;

#define min(x,y) (x<y?x:y)
#define endl '\n'
#define MAXN 10000001
typedef long long ll;

int gcd(int a, int b){
    return (a%b?gcd(b, a%b):b);
}

int mu[MAXN], p[MAXN], g[MAXN];
bool v[MAXN];

void init(){
    int n = MAXN;
    int m = 0;
    mu[1]=1;g[1]=0;
    //start sieve
    for(int i=2;i<n;i++){
        if(!v[i]){
            p[m++] = i;
            mu[i] = -1;
            g[i] = 1;
        }
        for(int j=0,t;(t=i*p[j])<n;j++){
            v[t]=true;
            if(i%p[j] == 0){
                mu[t] = 0;
                g[t] = mu[i];
                break;
            }
            mu[t] = -mu[i];
            g[t] = mu[i] - g[i];
        }
    }
    for(int i=1;i<n;i++) g[i]+=g[i-1];
}

int main(){
    ios_base::sync_with_stdio(false);
    init();
    int m,n,t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        if(n>m) swap(n,m);
        ll ret = 0;
        for(int i=1,d; i<=n; i = d+1){
            d = min(n / (n / i), m / (m / i));
            ret += (ll) (g[d] - g[i - 1]) * (n / i) * (m / i);
        }
        cout<<ret<<endl;
    }
    return 0;
}
