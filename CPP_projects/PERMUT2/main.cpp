#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i,ct,flag;
	int ar[100001];
	while(1){
		scanf("%d",&n);
		flag=1;
		if(n==0) break;
		for(i=1;i<=n;i++){
			scanf("%d", &ar[i]);
		}
		for(i=1;i<=n;i++) {
            if(ar[ar[i]]!=i){
                flag=0;
            }
		}
		if(flag==1){
			printf("ambiguous\n");
		}else{
			printf("not ambiguous\n");
		}
	}
	return 0;
}
