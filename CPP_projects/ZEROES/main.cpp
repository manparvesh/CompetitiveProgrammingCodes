#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    int n;
    while(t--){
        scanf("%d",&n);
        int ans=0;
        n/=5;int j=1;
        for(int i=1;i<=n;i++){
            j=i/5 + 1;
            ans+=(5*i*j);
        }
        printf("%d\n",ans);
    }
    return 0;
}
