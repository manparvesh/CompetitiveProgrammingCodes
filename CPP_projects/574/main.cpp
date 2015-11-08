#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    return (b==0?a:gcd(b,a%b));
}

int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int GCD = ar[0];
    if(n==1){
        cout<<"Yes\n";
    }else{
        for(int i=1;i<n;i++){
            GCD = gcd(GCD, ar[i]);
        }
        for(int i=0;i<n;i++){
            ar[i]/=GCD;
        }
        for(int i=0;i<n;i++){
            if(ar[i]==1){
                continue;
            }else{
                if(ar[i]%2==0){
                    while(ar[i]%2==0) ar[i]/=2;
                }
                if(ar[i]%3==0){
                    while(ar[i]%3==0) ar[i]/=3;
                }
            }
        }
        bool ans = true;
        for(int i=0;i<n;i++){
            if(ar[i]!=1){
                cout<<"No\n";
                ans = false;
                break;
            }
        }
        if(ans){
            cout<<"Yes\n";
        }
    }
    return 0;
}
