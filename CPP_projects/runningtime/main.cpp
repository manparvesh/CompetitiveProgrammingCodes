#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    int a[t],b[t];
    for(int i=0;i<t;i++){
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    sort(b,b+t);
    int ans=0;
    for(int i=0;i<t;i++){
        if(a[i]!=b[i]){
            ans++;
        }
    }
    printf("%d\n",ans);
    return 0;
}
