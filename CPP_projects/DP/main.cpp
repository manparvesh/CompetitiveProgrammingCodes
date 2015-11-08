#include <bits/stdc++.h>
using namespace std;

#define max(x,y) (x>y?x:y)
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    int t,n,ct;
    cin>>t;
    string a,b;
    while(t--){
        cin>>n;
        cin>>a>>b;
        ct=0;
        for(int i=0;i<n;i++){
            if(a[i]==b[i]){
                ct++;
            }
        }
        int m,x,ans;
        m=n;
        cin>>x;
        ans=x;
        for(int i=1;i<=m;i++){
            cin>>x;
            if(i<=ct){
                ans = max(x,ans);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
