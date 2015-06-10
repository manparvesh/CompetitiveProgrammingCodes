#include <bits/stdc++.h>
using namespace std;

int rev(int a){
    int res=0;
    while(a){
        res=res*10+a%10;
        a/=10;
    }
    return res;
}

int main()
{
    int n,a,b;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&a,&b);
        printf("%d\n", rev(rev(a)+rev(b)) );
    }
    return 0;
}
