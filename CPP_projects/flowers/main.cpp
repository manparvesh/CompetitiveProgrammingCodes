#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int c[n];
    for(int i=0;i<n;i++){
        scanf("%d",&c[i]);
    }
    sort(c,c+n);
    int a[k];
    for(int i=0;i<k;i++){
        a[i]=0;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=((a[i%k]+1)*c[n-1-i]);
        a[i%k]++;
    }
    printf("%d\n",ans);
    return 0;
}
