#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int num=ar[n-1];
    int i;
    for(i=n-2;i>=0;i--){
        if(ar[i]>num){
            ar[i+1]=ar[i];
            for(int j=0;j<n;j++){
                printf("%d ",ar[j]);
            }
            printf("\n");
        }else{
                ar[i+1]=num;
                for(int j=0;j<n;j++){
                    printf("%d ",ar[j]);
                }
                printf("\n");
        }
        if(i==0){
            printf("%d ",num);
            for(int j=1;j<n;j++){
                    printf("%d ",ar[j]);
                }
            printf("\n");
        }
    }

    return 0;
}
