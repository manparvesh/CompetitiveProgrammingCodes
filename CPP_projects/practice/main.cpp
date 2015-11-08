#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(false);
    int n,k;
    cin>>n>>k;
    k %= n;
    int ar[n];
    for(int i=0;i<n;i++) cin>>ar[i];
    if(k){
        reverse(ar,ar+k);
        reverse(ar+k+1, ar+n);
        reverse(ar,ar+n);
    }
    for(int i=0;i<n;i++) cout << ar[i] << " ";
    cout <<endl;
    return 0;
}
