#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,g,mg,i,s1,s2,temp1,temp2;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&g,&mg);
        int ag[g],amg[mg];
        for(i=0;i<g;i++) scanf("%d",&ag[i]);
        s1=ag[0];
        for(i=1;i<g;i++) s1=(s1>ag[i]?s1:ag[i]);

        for(i=0;i<mg;i++) scanf("%d",&amg[i]);
        s2=amg[0];
        for(i=1;i<mg;i++) s2=(s2>amg[i]?s2:amg[i]);

        if(s1>=s2){
            printf("Godzilla\n");
        }else if(s1<s2){
            printf("MechaGodzilla\n");
        }
    }
    return 0;
}
