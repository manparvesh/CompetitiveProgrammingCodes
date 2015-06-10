#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i;
    long long Chef;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        long long int ar[n];
        for(i=0;i<n;i++) scanf("%ld",&ar[i]);
        Chef=0;
        sort(ar,ar+n);
        for(i=1;i<=n;i++) {
            if(i%2!=0){
                Chef+=ar[i];
            }
        }
        printf("%ld\n",Chef);
    }
    return 0;
}
