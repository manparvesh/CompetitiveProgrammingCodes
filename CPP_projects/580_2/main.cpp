#include <bits/stdc++.h>
using namespace std;

#define fore(i,n,e) for(int i=0;i<n;i+=e)
#define ford(i,n) for(int i=n;i>=0;i--)
#define forint(i,l,r) for(int i=l;i<r;i++)
#define forn(i,n) for(int i=0;i<n;i++)
#define pii pair<int, int>
#define pura(v) v.begin(),v.end()
#define mp make_pair
#define pb push_back
#define ft first
#define sc second
#define in cin
#define out cout
#define max(x,y) (x>y?x:y)
#define min(x,y) (x<y?x:y)
#define endl "\n"
typedef long long ll;
const int INF = INT_MAX;

//debug
#define DEBUG 1

#ifdef DEBUG
    freopen("input.txt", "r", stdin);
#endif // DEBUG

int main(){
    ios_base::sync_with_stdio(false);
    int n,d;
    cin>>n>>d;
    pii v[n];
    forn(i,n) in>>v[i].ft>>v[i].sc;
    sort(v,v+n);

    int l=0, r=0;
    ll mx = 0,s=0;
    for(l=0;l<n;l++){
        while(r<n && v[r].ft - v[l].ft < d){
            s+=v[r].sc;
            r++;
        }
        mx = max(mx, s);
        s-=v[l].sc;
    }

    cout<<mx<<endl;

#ifdef DEBUG
    cerr << "Time elapsed: " << clock()/1000<< " ms."<<endl;
#endif // DEBUG

    return 0;
}
