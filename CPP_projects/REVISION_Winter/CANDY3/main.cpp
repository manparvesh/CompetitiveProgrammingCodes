#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,i,res;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int ar[n];
        res=0;
        for(i=0;i<n;i++) scanf("%d",&ar[i]);
        for(i=0;i<n;i++) res+=ar[i];
        if(!(res%n)){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}
