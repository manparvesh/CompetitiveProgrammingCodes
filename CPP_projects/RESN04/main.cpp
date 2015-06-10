#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);

    while(t--){
        int n, x, ct=0;
        //int ar[n];
        scanf("%d",&n);
        for (int a=1;a<=n;a++){
            scanf("%d",&x);
            ct+=(x/a);
        }
        if(ct==0||ct%2!=0)
            printf("ALICE\n");
        else
            printf("BOB\n");
    }
    return 0;
}
