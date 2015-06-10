#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    int a,b;
    while(t--){
        scanf("%d %d",&a,&b);
        a%=10;
        int ans=1;
        if(b==0){
            printf("1\n");
        }else{
            b%=4;
            if(b==0){
                b=4;
            }
            for(int i=0;i<b;i++){
                ans*=a;
            }
            printf("%d\n",ans%10);
        }
    }
    return 0;
}
