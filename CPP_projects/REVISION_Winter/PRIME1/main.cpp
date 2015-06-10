#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&a,&b);
        int ar[b];
        for(int i=2;i<b;i++) ar[i]=1;
        for(int i=2;i<b;i++){
            for(int j=i;j*i<=b;j++){
                ar[i*j]=0;
            }
        }
        for(int i=((a>2)?a:2);i<=b;i++){
            if(ar[i])
                printf("%d\n",i);
        }
        printf("\n");
    }
    return 0;
}
