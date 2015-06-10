#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,a,ct=0;
    scanf("%d %d", &n,&k);
    while(n--){
        scanf("%d",&a);
        if(a%k==0){
            ct++;
        }
    }
    printf("%d\n",ct);
    return 0;
}
