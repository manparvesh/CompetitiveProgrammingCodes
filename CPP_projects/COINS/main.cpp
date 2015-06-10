#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll f(ll x){
	if(x<5){
		return x;
	}
	return max(1ll*x,f(x/4)+f(x/2)+f(x/3));
}

int main(){
	long long int n,k;
	while((scanf ("%lld",&n))!=EOF){
		printf("%lld\n",f(n));
	}
	return 0;
}
