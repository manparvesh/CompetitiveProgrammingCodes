#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,g,mg,i,s1,s2;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&g,&mg);
        int ag[g],amg[mg];
        s1=s2=0;
        for(i=0;i<g;i++) scanf("%d",&ag[i]);
        for(i=0;i<g;i++) s1+=ag[i];

        for(i=0;i<mg;i++) scanf("%d",&amg[i]);
        for(i=0;i<mg;i++) s2+=amg[i];

        if(s1>=s2){
            printf("Godzilla\n");
        }else{
            printf("MechaGodzilla\n");
        }
    }
    return 0;
}
