#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=1;
    scanf("%d",&n);
    while(1){
        if(n==0){
            break;
        }
        int ar[n];
        int total=0;
        for(int i=0;i<n;i++){
            scanf("%d",&ar[i]);
            total+=ar[i];
        }
        int avg=total/n;
        int ct=0;
        for(int i=0;i<n;i++){
            ct+=(abs(ar[i]-avg));
        }
        ct/=2;
        printf("Set #%d\n",c);
        printf("The minimum number of moves is %d.\n",ct);
        scanf("%d",&n);
        c++;
    }
    return 0;
}
