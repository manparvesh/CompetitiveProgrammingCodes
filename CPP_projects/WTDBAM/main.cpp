#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t,n;
    string corr,chef;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>corr>>chef;
        int prize[n+1];
        for(int i=0;i<=n;i++) cin>>prize[i];
        int ct=0;
        for(int i=0;i<n;i++){
            if(corr[i]==chef[i]){
                ct++;
            }
        }
        cout<<prize[ct]<<endl;
    }
    return 0;
}
