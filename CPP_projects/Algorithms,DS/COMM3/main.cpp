#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    int x1,y1,x2,y2,x3,y3;
    double d1,d2,d3;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        scanf("%d %d", &x1,&y1);
        scanf("%d %d", &x2,&y2);
        scanf("%d %d", &x3,&y3);
        d1=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        d2=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
        d3=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
        if((n>=d1 || n>=d2) && (n>=d3 || n>=d2) && (n>=d1 || n>=d3)){
            printf("yes\n");
        }else{
            printf("no\n");
        }
    }
    return 0;
}
