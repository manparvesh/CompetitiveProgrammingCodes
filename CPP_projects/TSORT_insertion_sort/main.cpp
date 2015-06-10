#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int ar[n+1];
    for(int a=1;a<=n;a++){
        scanf("%d",&ar[a]);
    }
    int ptr,t;
    ar[0]=0;
    for (int a=2;a<=n;a++){
        t=ar[a];
        ptr=a-1;

        while(t<ar[ptr]){
            ar[ptr+1]=ar[ptr];
            ptr--;
        }

        ar[ptr+1]=t;
    }

    for(t=1;t<=n;t++){
        printf("%d\n",ar[t]);
    }

    return 0;
}
