#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char s[100001];
		cin>>s;
		set<char> ans;
		for(int i=0;s[i]!='\0';i++)
		 {
		 	char x=s[i];
		 	ans.insert(x);

		 }
		 printf("%d\n",ans.size());
	}
	return 0;
}
