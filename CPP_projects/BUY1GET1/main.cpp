#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,i,ct;
	int ar[256];
	string s;
	scanf("%d",&t);
	while(t--){
		cin>>s;
		ct=0;
		for(i=0;i<256;i++) ar[i]=0;
        for(i=0;i<s.length();i++){
            ar[s[i]]++;
        }
        for(i=0;i<256;i++) ct+=(ar[i]/2+ar[i]%2);
        printf("%d\n",ct);
	}
	return 0;
}
