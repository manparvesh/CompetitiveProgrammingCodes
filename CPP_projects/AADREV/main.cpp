#include <bits/stdc++.h>

using namespace std;

int rev(int a){
    int rvrs=0;
    while(a!=0){
        rvrs*=10;
        rvrs+=a%10;
        a/=10;
    }
    return rvrs;
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            cout<<rev(rev(a)+rev(b))<<endl;
    }
    return 0;
}
