#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k,t,i;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&k);
        k++;
        int ar[n];
        for(i=0;i<n;i++){
            scanf("%d",ar[i]);
            ar[i]%=k;
        }
        if(n==2){
            printf("YES\n");
        }else{
            int x,y,c1,c2;
            x=ar[0];
            y=ar[1];
            c1=0;c2=0;
            for(i=0;i<n;i++){
                if(x==ar[i]){
                    c1++;
                }
                if(y==ar[i]){
                    c2++;
                }
            }
            if(c1==n-1 || c2==n-1 || c1==n){
                printf("YES\n");
            }else{
                printf("NO\n");
            }
        }
    }
    return 0;
}
