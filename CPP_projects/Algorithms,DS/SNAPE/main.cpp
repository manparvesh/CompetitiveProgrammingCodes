#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,b,ls;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&b,&ls);
        cout<<(double) sqrt(ls*ls-b*b)<<" "<<(double) sqrt(ls*ls+b*b)<<"\n";
    }
    return 0;
}
