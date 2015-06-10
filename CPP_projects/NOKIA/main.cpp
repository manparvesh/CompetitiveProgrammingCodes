#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    int max[32],min[32];
    max[0]=0;min[0]=0;

    for(int i=1;i<32;i++){
        max[i]=max[i-1]+1+i;
        min[i]=min[i/2]+min[i-i/2-1]+i+1;
    }

    int m,n;
    while(t--){
        scanf("%d %d",&n,&m);
        if(m<min[n]) printf("-1\n");
		else if(m<=max[n]) printf("0\n");
		else printf("%d\n",(m-max[n]));
    }
    return 0;
}
