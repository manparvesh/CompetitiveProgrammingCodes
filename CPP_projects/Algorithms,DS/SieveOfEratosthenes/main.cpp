#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int a=2;a<n;a++){
        ar[a]=1;
    }
    for (int a=2;a<n;a++){
        if(ar[a]){
            for (int b=a;a*b<n;b++){
                ar[a*b]=0;
            }
        }
    }
    for (int a=2;a<n;a++){
        if(ar[a])
            printf("%d\n",a);
    }

    return 0;
}
