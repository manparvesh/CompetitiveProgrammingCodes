#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,ct;
    while(1){
        scanf("%d",&n);
        ct=0;
        if(n){
            for(int i=0;i<n;i++){
                ct+=(n-i)*(n-i);
            }
        }else{
            break;
        }
        printf("%d\n",ct);
    }
    return 0;
}
