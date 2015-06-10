#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,temp;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int ar[n];
        for(int i=0;i<n;i++){
            scanf("%d",&temp);
            ar[i]=temp*3;
        }
        for(int i=0;i<n;i++){
            scanf("%d",&temp);
            ar[i]+=temp;
        }
        int max=ar[0];
        for(int i=0;i<n;i++){
            if(ar[i]>max){
                max=ar[i];
            }
        }
        printf("%d\n",max);
    }
    return 0;
}
