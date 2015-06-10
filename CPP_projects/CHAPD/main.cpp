#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ll;

ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    int t;
    scanf("%d",&t);
    ll a,b;
    while(t--){
        scanf("%llu %llu",&a,&b);
        ll h=gcd(a,b);
        if(h==1 && a>1 && b>1){
            printf("No\n");
        }else{
            ll yi=b/h;
            while(h>1){
                h=gcd(h,yi);
                yi/=h;
            }
            if(yi==1){
                printf("Yes\n");
            }else{
                printf("No\n");
            }
        }
    }
    return 0;
}
