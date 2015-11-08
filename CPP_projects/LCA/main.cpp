#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

ll get_lca(ll *parent, ll a, ll b){
    bool *vis = new bool[1001];
    vis[a]=true;
    while(parent[a]!=a){
        a = parent[a];
        vis[a]=true;
    }
    vis[a]=true;
    while(!vis[b]){
        b = parent[b];
    }
    return b;
}

int main(){
    ios_base::sync_with_stdio(false);
    int Q,t,n,x,temp;
    ll u,v;
    cin>>t;
    for(int xx=1;xx<=t;xx++){
        cin>>n;
        ll *parent = new ll[1001];
        for(int i=1;i<=n;i++) parent[i]=i;
        ll i = 1;
        while(i <= n){
            ll children;
            cin>>children;
            while(children--){
                ll child;
                cin>>child;
                parent[child] = i;
            }
            i++;
        }

        cout<<"Case "<<xx<<":"<<endl;
        cin>>Q;
        while(Q--){
            cin>>u>>v;
            cout<< get_lca(parent, u,v) << endl;
        }
    }
    return 0;
}
