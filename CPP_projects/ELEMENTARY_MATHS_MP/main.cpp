#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int a[200];
    int n,i,j,temp,m,x;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        a[0]=1;
        m=1;
        temp=0;
        for(i=1;i<=n;i++){
            for(j=0;j<m;j++){
                x=a[j]*i+temp;
                a[j]=x%10;
                temp=x/10;
            }
            while(temp>0) //while loop that will store the carry value on array.
             {
               a[m]=temp%10;
               temp = temp/10;
               m++; // increments digit counter
             }
        }
        for(i=m-1;i>=0;i--) printf("%d",a[i]);
        printf("\n");
    }
    return 0;
}
