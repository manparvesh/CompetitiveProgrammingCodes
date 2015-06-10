#include <bits/stdc++.h>
using namespace std;

#define mp(x,y) make_pair(x,y)

int main()
{
    int t;
    scanf("%d",&t);
    int n;
    while(t--){
        scanf("%d",&n);
        int arrive[n],depart[n];
        pair<int,int> v[2*n];
        for(int i=0;i<n;i++){
            scanf("%d",&arrive[i]);
            v[i]=make_pair(arrive[i],1);
        }
        for(int i=0;i<n;i++){
            scanf("%d",&depart[i]);
            v[i+n]=make_pair(depart[i],-1);
        }
        sort(v,v+2*n);
        int ans=0;
        int sum=0,temp=0;
        for(int i=0;i<2*n;i++){
            temp=v[i].second;
            sum+=temp;
            ans=(ans>sum?ans:sum);
        }
        printf("%d\n",ans);
    }
    return 0;
}
