#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int ar[n];
    for(int i=0;i<n;i++){
        ar[i]=0;
    }
    int a,b,k;
    while(m--){
        scanf("%d %d %d",&a,&b,&k);
        a--;b--;
        for(int j=a;j<=b;j++){
            ar[j]+=k;
        }
    }
    int ans=ar[0];
    for(int i=0;i<n;i++){
        ans=(ans>ar[i]?ans:ar[i]);
    }
    printf("%d\n",ans);
    return 0;
}
