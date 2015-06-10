#include<stdio.h>
int main()
{
    unsigned long long a,b,c,n,m;
    while(scanf("%llu%llu",&n,&m)&&(n||m))
    {
        a=0,b=1,c=1;
        int cnt=0;
        while(c<=m)c=a+b,a=b,b=c,cnt+=(c>=n&&c<=m);
        printf("%d\n",cnt);
    }
    return 0;
}
