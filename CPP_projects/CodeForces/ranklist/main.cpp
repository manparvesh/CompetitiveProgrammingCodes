#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,s;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&s);
        int ct=0;
		for(int i=n;s>0;i--){
			s-=((n-i+1));
			ct++;
			if(s<(n)){
				break;
			}
        }
        printf("%d\n",n-ct);
    }
    return 0;
}
