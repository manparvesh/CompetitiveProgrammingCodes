#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n,m,i,sum;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&n,&m);
		int ar[n];
		sum=0;
		for(i=0;i<n;i++) scanf("%d",&ar[i]);
		sort(ar,ar+n);
		for(i=0;sum<=m;i++) sum+=ar[i];
		if(sum==m){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}
	return 0;
}
