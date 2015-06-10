#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    int n,m,k,temp;
    while(t--){
        scanf("%d %d %d",&n,&m,&k);
        bool a[n],b[n];
        for(int i=0;i<n;i++){
            a[i]=0;
            b[i]=0;
        }
        for(int i=0;i<m;i++){
            scanf("%d",&temp);
            a[temp-1]=1;
        }
        for(int i=0;i<k;i++){
            scanf("%d",&temp);
            b[temp-1]=1;
        }
        int n1=0,n2=0;
        for(int i=0;i<n;i++){
            if(a[i]==1 && b[i]==1){
                n1++;
            }else if(a[i]==0 && b[i]==0){
                n2++;
            }
        }
        printf("%d %d\n",n1,n2);
    }
    return 0;
}
