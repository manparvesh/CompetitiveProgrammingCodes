#include <bits/stdc++.h>
using namespace std;

int sidelen(int x1,int y1,int x2,int y2){
    return ((y2-y1)*(y2-y1) + (x2-x1)*(x2-x1));
}

bool isright(int x1, int y1, int x2, int y2, int x3, int y3){
    int s1= sidelen(x1,y1,x2,y2);
    int s2= sidelen(x2,y2,x3,y3);
    int s3= sidelen(x1,y1,x3,y3);
    if(((s1 + s2)==s3)||((s3+s1)==s2)||((s3+s2)==s1)){return 1;}else{return 0;}
}

int main()
{
    int t,ct=0;
    int x1, y1, x2, y2, x3, y3;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
        if(isright(x1, y1, x2, y2, x3, y3)) ct++;
    }
    printf("%d\n",ct);
    return 0;
}
