#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    int ar[2001];
    for(int i=0;i<=n;i++){ar[i]=0;}
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        ar[temp]++;
    }
    int rnk = 1;
    temp = 0;
    for(int i=n;i>0;i--){
        if(ar[i]){
            temp = ar[i];
            for(int j=0;j<temp;j++) cout<<rnk<<" ";
            rnk += temp;
        }
    }
    return 0;
}
