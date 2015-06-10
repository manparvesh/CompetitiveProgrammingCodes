#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    scanf("%d",&t);
    ll r2,k,kreq;
    while(t--){
        scanf("%lld %lld",&r2,&k);
        ll r=sqrt(r2);
        kreq=0;
        for(ll i=0;i<r;i++){
            ll temp=sqrt(r2-i*i);
            if((r2-i*i)==(temp*temp)){
                kreq++;
     //           cout<<"i= "<<i<<" temp= "<<temp<<endl;
            }
        }
        kreq*=4;
    //    cout<<"kreq= "<<kreq<<endl;
        if(k>=kreq){
            printf("possible\n");
        }else{
            printf("impossible\n");
        }
    }
    return 0;
}
