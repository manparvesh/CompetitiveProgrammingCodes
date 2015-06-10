#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,ct;
    scanf("%d",&n);
    while(n--){
        ct=0;
        scanf("%d",&a);
        for(int i=5;i<=a;i*=5){
            ct+=a/i;
        }
    printf("%d\n",ct);
    }
    return 0;
}
