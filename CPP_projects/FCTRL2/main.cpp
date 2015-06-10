#include <iostream>
#define ll long long

using namespace std;

ll fact(ll n){
    ll r;
    if (n==0) {return 1;}
    return n*fact(n-1);
}

int main()
{
    int t;
    cin>>t;

    for (int a=0;a<t;a++){
        ll n;
        cin>>n;

        cout<<fact(n)<<endl;

    }

    return 0;
}
