#include <bits/stdc++.h>
using namespace std;

int ar[112345];

int main()
{
    int n;
    scanf("%d",&n);
    ar[0]=0;
    for(int i=1;i<=n;i++){
        scanf("%d",&ar[i]);
    }
    int L[n+1],R[n+1];
    L[1]=L[n]=R[0]=R[n]=0;
    int l=ar[1],r=ar[n];
    for(int i=2;i<n;i++){
        if(ar[i]<)
    }
    int ans=0;
    for(int i=2;i<n;i++){
        ans=(ans>(L[i]*R[i])?ans:(L[i]*R[i]));
    }
    printf("%d\n",ans);
    return 0;
}
