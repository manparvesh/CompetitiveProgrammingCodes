#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=10,a,b;
    while(n--){
        scanf("%d",&a);
        scanf("%d",&b);
        printf("%d\n%d\n",(a+b)/2,a-(a+b)/2);
    }
    return 0;
}
