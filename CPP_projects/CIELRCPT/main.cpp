#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,ct,divr;
    scanf("%d",&t);
    while(t--){
        divr=2048;
        scanf("%d",&n);
        ct=0;
        for(i=11;i>=0;i--){
            ct+=(n/divr);
            n%=divr;
            divr/=2;
        }
        printf("%d\n",ct);
    }
    return 0;
}
