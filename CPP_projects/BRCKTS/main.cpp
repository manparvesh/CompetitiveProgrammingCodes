#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;
#define max(x,y) (x>y?x:y)
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define forn(i,n) for(int i=0;i<n;i++)
#define pii pair<int, int>
#define MOD 1e9+7
#define MAXN 1e9
#define min(x,y) (x<y?x:y)

void pnl(){
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    int t;
    string a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        int ct=0;
        for(int i=0;i<min(a.length(),b.length());i++){
            ct += (a[i]==b[i]);
        }
    }
    return 0;
}
