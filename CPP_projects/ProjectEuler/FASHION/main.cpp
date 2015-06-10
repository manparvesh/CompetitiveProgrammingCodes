#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,c,ct;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int m[n],f[n];
        ct=0;
        for(c=0;c<n;c++) cin>>m[c];
        for(c=0;c<n;c++) cin>>f[c];
        for(c=0;c<n;c++) ct+=(m[c]*f[c]);
        printf("%d\n",ct);
    }
    return 0;
}

