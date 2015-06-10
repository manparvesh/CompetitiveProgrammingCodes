#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    int n;
    while(t--){
        scanf("%d",&n);
        int s=sqrt(n);
        for(int i=s;i>=1;i--){
            if(n%i==0){
                printf("%d\n",(n/i - i));
                break;
            }
        }
    }
    return 0;
}
