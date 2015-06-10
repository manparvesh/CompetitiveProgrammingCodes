#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,ct,i,j,ar[101][101];
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for (i=0;i<n;i++){
			for (j=0;j<=i;j++){
				scanf("%d", &ar[i][j]);
			}
		}
		for (i=n-2;i>=0;i--){
			for (j=i;j>=0;j--){
				ar[i][j]+= max(ar[i+1][j], ar[i+1][j+1]);
			}
		}
		printf("%d\n", ar[0][0]);
    }
    return 0;
}
