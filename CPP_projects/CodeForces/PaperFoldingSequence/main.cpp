#include <bits/stdc++.h>
using namespace std;

int odd(int t){
    if(t%2==1){
        return t;
    }else{
        return odd(t/2);
    }
}

int main()
{
    int t,n,ct;
    scanf("%d",&t);
    ct=(pow(2,t)-1);
    for(int i=1;i<=ct;i++){
        n=odd(i);
            printf("%d",(n%4==1?1:0));
    }
    printf("\n");
    return 0;
}
