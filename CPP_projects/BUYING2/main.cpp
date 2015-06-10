#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    int n,x;
    while(t--){
        scanf("%d %d",&n,&x);
        int ar[n];
        int sum=0;
        for(int i=0;i<n;i++){
            scanf("%d",&ar[i]);
            sum+=ar[i];
        }
        stable_sort(ar,ar+n);
        int r=sum%x;
        if(r>=ar[0] || sum<x){
            printf("-1\n");
        }else{
            printf("%d\n",sum/x);
        }
    }
    return 0;
}
