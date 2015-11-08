#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;
#define max(x,y) (x>y?x:y)

int ABS(int x){return (x>0?x:-x);}

int main(){
    ios_base::sync_with_stdio(false);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++) cin>>ar[i];
        ll ct=n,m=1;
        int temp=ar[0];
        for(int i=1;i<n;i++){
            if(ar[i]>=temp){
                temp = ar[i];
                m++;
            }else{
                ct += (m*(m-1)/2);
                temp=ar[i];
                m=1;
            }
        }
        ct += (m*(m-1)/2);
        cout<<ct<<endl;
    }
    return 0;
}
