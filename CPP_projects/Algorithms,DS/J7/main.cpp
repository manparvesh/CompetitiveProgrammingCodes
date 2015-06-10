#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,p,s;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&p,&s);
        float x,y,v;
        y=(p - sqrt((p*p)-24*s))/12;
	    x=(p - 8*y)/4;
	    v=x*pow(y,2);
		printf("%.2f\n",v);
    }
    return 0;
}
