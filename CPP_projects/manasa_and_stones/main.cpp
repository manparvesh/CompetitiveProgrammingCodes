#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    int n,a,b;
    while(t--){
        cin>>n>>a>>b;
        if(a>b){
            int t=a;
            a=b;
            b=t;
        }
        if(a==b){
            cout<<(n-1)*a<<endl;
        }else{
            int ans=(n-1)*a;
            for(int i=0;i<n;i++){
                cout<<ans<<" ";
                ans=ans-a+b;
            }
            cout<<endl;
        }
    }
    return 0;
}
