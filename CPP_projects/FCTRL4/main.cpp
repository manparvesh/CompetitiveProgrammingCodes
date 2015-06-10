#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long L;

L ld(L n){
    L i,j,pw,pw2=0,pw5=0,res=1;
	for(i=1;i<=n;i++)
	{
		j=i;
		while(j%2==0)
		{
			j=j/2;
			pw2++;
		}
		while(j%5==0)
		{
			j=j/5;
			pw5++;
		}
		res=(res*(j%10))%10;
	}
		pw=pw2-pw5;
		for(i=1;i<=pw;i++)
		{
			res=(res*2)%10;
		}
		return res;
}

int D(unsigned long long n)
{
	int t=(n/10)%10;
	if(n<10)
	{
		switch(n)
		{
			case 1: return 1;
			case 2: return 2;
			case 3: return 6;
			case 4: return 4;
			case 5: return 2;
			case 6: return 2;
			case 7: return 4;
			case 8: return 2;
			case 9: return 8;
			case 0: return 1;
		}
	}
	if(t&1)
	{
		return (4*D((n/5))*D(n%10))%10;
	}
	else
		return (6*D((n/5))*D(n%10))%10;
}

int main(){
	L n;
	cin>>n;
	while(n!=0){
        cout<<D(n)<<endl;
        cin>>n;
    }
}
