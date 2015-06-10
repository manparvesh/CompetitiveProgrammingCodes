#include <bits/stdc++.h>
using namespace std;

bool ar[123456];

int main()
{
    int n,q,i,j;
    int Q,a,b;
    scanf("%d %d",&n,&q);
    for(i=0;i<n;i++) ar[i]=false;
    for(i=0;i<q;i++){
        scanf("%d %d %d",&Q,&a,&b);
        if(Q==0){
            for(j=a;j<=b;j++){
                if(ar[j]==true){
                    ar[j]=false;
                }else{
                    ar[j]=true;
                }
            }
        }else{
            int sum=0;
            for(j=a;j<=b;j++){
                if(ar[j]){
                    sum++;
                }
            }
            printf("%d\n",sum);
        }
    }

    return 0;
}
