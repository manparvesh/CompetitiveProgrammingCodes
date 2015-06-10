#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,id,idsum,sum;
    scanf("%d",&t);
    while(t--){
        sum=0;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d %d",&id,&idsum);
            sum+=(id-idsum);
        }
        printf("%d\n",sum);
    }
    return 0;
}
