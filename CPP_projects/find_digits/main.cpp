#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,ans;
    scanf("%d",&t);
    while(t--){
        long n,r;
        cin>>n;
        ans=0;r=n;
        while(r){
            if(r%10){
                if(n%(r%10)==0){
                    ans++;
                }
            }
            r/=10;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
