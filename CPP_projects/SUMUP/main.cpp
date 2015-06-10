#include <bits/stdc++.h>
using namespace std;

double ar[12345];


int main()
{
    double a=1.0,b,b1=1.0,b2=3.0,b11=2.0,b22=4.0;//1*3,3*7,7*13,13*21
    ar[0]=0;
    for(int i=1;i<=10000;i++){
        b=b1*b2;
        ar[i]=ar[i-1]+a/b;
        a++;
        b1+=b11;
        b2+=b22;
        b11+=2;
        b22+=2;
    }
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        printf("%.5f\n",ar[n]);
    }
    return 0;
}
