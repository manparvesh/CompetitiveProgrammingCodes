#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,n1;
    scanf("%d %d",&n,&m);
    int a,b,k;
    n1=n;
    int ans=0;
    double ansd=0;
    while(m--){
        scanf("%d %d %d",&a,&b,&k);
        ansd+=(double)((b-a+1)*k/n);
    }
    ans=(int)ansd;
    cout<<ans<<endl;
    return 0;
}
