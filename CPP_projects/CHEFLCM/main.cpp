#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long L;

L lcm(int a,int b){
    L c=a*b;
    while(a!=b)
    {
        if(a>b)
        a=a-b;
        else
        b=b-a;
    }
    return c/a;
}

int main()
{
    int t;
    scanf("%d",&t);

    return 0;
}
