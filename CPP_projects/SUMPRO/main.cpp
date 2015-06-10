#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long L;

int main(){
    L ans,t,n;
    cin>>t;
    while(t--){
        ans=0;
        cin>>n;
        for(int i=1;i<=n;i++){
            ans+=((n/i)*i);
            ans%=1000000007;
        }
        cout<<ans<<endl;
    }
    return 0;
}
