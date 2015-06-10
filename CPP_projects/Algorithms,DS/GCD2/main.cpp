#include <bits/stdc++.h>
using namespace std;

long gcd(long a, long b)
{
	if (b==0)
		return a;
	else
		return gcd(b,a%b);
}

int main()
{
    long t;
    int a;
    string b;
    scanf("%ld",&t);
    while(t--){
        cin>>a>>b;
        int sn=0;
        if (a > 0) {
            for (int x=0;x<b.length();x++) {
                sn = sn*10;
                sn += b[x]-'0';
                sn = sn%a;
            }
            cout << __gcd(a ,sn) << endl;
        }else{
            cout << b << endl;
        }
    }
    return 0;
}
