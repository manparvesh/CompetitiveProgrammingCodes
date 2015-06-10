#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a;
    int n,k,i,ar[101]={0};
    scanf("%lld %d %d",&a,&n,&k);
    for(i=0;i<k;i++){
        ar[i]=a%(n+1);
        a/=(n+1);
        printf("%d ",ar[i]);
    }
    return 0;
}
