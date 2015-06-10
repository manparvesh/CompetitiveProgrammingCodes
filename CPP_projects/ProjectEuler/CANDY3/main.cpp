#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,t,temp,i,res;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        res=0;
        for(i=0;i<n;i++) {scanf("%lld",&temp);res=((res+temp)%n);}
        if(!(res)){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}
