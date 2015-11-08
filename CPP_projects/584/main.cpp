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

int main(){
    ios_base::sync_with_stdio(false);
    int n,k;
    cin>>n>>k;
    string a,b;
    cin>>a>>b;
    int ar1[26], ar2[26], com[26];
    for(int i=0;i<26;i++) ar1[i]=ar[i]=com[i]=0;
    for(int i=0;i<n;i++){
        ar1[(int) (a[i]-'a')]++;
        ar2[(int) (b[i]-'a')]++;
    }
    int common = 0;
    for(int i=0;i<26;i++){
        com[i] = min(ar1[i], ar2[i]);
        common += com[i];
    }

    return 0;
}
