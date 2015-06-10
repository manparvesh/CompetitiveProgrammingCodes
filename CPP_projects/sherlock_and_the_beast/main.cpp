#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    int n,n3,i,n5,n1;
    while(t--){
        scanf("%d",&n);
        n3=0;n5=0;
        n1=n;
        for(i=0;i*3<n;i++){
           if((n-(i*5))%3==0){
               n-=(i*5);
               n5+=(i*5);
               break;
           }
        }
        n3=n;
        if(n1==3){
            printf("555\n");
        }else if(n1==5){
            printf("33333\n");
        }else if(i*3>n1){
            printf("-1\n");
        }else{
            for(i=0;i<n3;i++){
                printf("5");
            }
            for(i=0;i<n5;i++){
                printf("3");
            }
            printf("\n");
        }
    }
    return 0;
}
